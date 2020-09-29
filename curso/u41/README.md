# Herencia y delegación

## Herencia

La herencia es un mecanismo de la programación orientada a objetos que sirve para crear clases nuevas a partir de clases preexistentes. Se toman (heredan) atributos y métodos de las clases bases y se los modifica para modelar una nueva situación.
La clase desde la que se hereda se llama **clase base** y la que se construye a partir de ella es una **clase derivada**.

En C++ hay distintos tipos de herencia. En este curso vamos a ver un ejemplo de una **herencia simple** donde creamos una clase derivada a partir de una clase base. Otro tipo que no estudiaremos es la **herencia múltiple** donde se crea una clase derivada a partir de varias clases bases.

## Derivar clases

La sintaxis para realizar una herencia simple sería:

    class <clase_derivada>:[public|private] <clase_base> 
    {
        ...
    }

Vemos que la clase base la podemos definir con dos tipos de acceso:

* `public`: los miembros heredados de la clase base conservan el tipo de acceso con que fueron declarados en ella.
* `private`: todos los miembros heredados de la clase base pasan a ser miembros privados en la clase derivada.

En esta introducción vamos a indicar el tipo de acceso `public`.

Además vamos añadir un nuevo tipo de acceso a la declaración de los miembros en la clase base. Habíamos visto el tipo de acceso `public` (se pueden acceder desde el exterior) y el `private` (no se pueden acceder desde el exterior, usamos un método para ello). ahora incluimos un nuevo tipo de acceso pensando en la herencia:

* `protected`: Que nos permite que los datos sean inaccesibles desde el exterior de las clases, pero a la vez, permite que sean accesibles desde las clases derivadas.

## Constructores en clases derivadas

Cuando se crea un objeto de una clase derivada, primero se invoca al constructor de la clase o clases base y a continuación al constructor de la clase derivada. 

Cuando queramos inicializar las clases base usando parámetros desde el constructor de una clase derivada lo haremos de este modo:

    <clase_derivada>(<lista_de_parámetros>) :  <clase_base>(<lista_de_parámetros>) 
    {
        ...
    }
Es decir, el constructor de la clase derivada recibe todos los parámetros y llama al constructor de la clase base envíando los parámetros adecuados para finalmente incializar los atributos que le son propio. Por ejemplo:

    Punto3d::Punto3d(float nx,float ny, float nz):Punto(nx,ny)
    {   
	    z=nz;
    }

Si nuestra clase base es la clase `Punto` estudiada en unidades anteriores, puedo crear una nueva clase de la siguiente manera:


```
#include <iostream>
#include <cmath>
using namespace std;

class Punto
{
	//Atributos
protected:
	float x;
	float y;
public:	
	//Métodos
	Punto();
	Punto(float nx, float ny);
	void mostrar();
	float distancia(Punto otro);
	void set_x(float nx);
	float get_x();
	void set_y(float nx);
	float get_y();
};	

Punto::Punto()
{
	x=0;
	y=0;
}
Punto::Punto(float nx, float ny)
{
	x=nx;
	y=ny;
}
void Punto::mostrar()
{
	cout << x << "-" << y;
}
float Punto::distancia(Punto otro)
{
	float dx, dy;
	dx = x - otro.x;
	dy = y - otro.y;
	return sqrt(dx*dx + dy*dy);
}


void Punto::set_x(float nx)
{
	if (nx>=0)
		x=nx;
	else
		x=0;
}

float Punto::get_x()
{
	return x;
}

void Punto::set_y(float ny)
{
	if (ny>=0)
		y=ny;
	else
		y=0;
}

float Punto::get_y()
{
	return y;
}


//Clase Punto3d

class Punto3d: public Punto
{
	float z;
public:
	Punto3d();
	Punto3d(float nx,float ny, float nz);
	void mostrar();
	float distancia(Punto3d otro);
	void set_z(float nz);
	float get_z();
	
	
};

Punto3d::Punto3d()
{
	z=0;
}

Punto3d::Punto3d(float nx,float ny, float nz):Punto(nx,ny)
{
	z=nz;
}

void Punto3d::set_z(float nz)
{
	if (nz>=0)
		z=nz;
	else
		z=0;
}

float Punto3d::get_z()
{
	return z;
}

void Punto3d::mostrar()
{
	cout << x << "-" << y << "-" << z;
}

float Punto3d::distancia(Punto3d otro)
{
	float dx, dy, dz;
	dx = x - otro.x;
	dy = y - otro.y;
	dz = z - otro.z;
	return sqrt(dx*dx + dy*dy + dx*dz);
}


int main(int argc, char *argv[]) {
	
	//Podemos crear objetos de la clase Punto
		
	Punto punto1;
	Punto punto2(3,4);
	punto1.set_x(7);
	cout << punto1.distancia(punto2) << endl;
	
	//Podemos crear objetos de la clase Puntoo3d
		
	Punto3d punto3;
	Punto3d punto4(2,3,4);
	punto3.mostrar();
	punto3.set_x(5);
	punto3.set_z(4);
	cout << endl;
	punto3.mostrar();
	cout << endl;
	cout << punto3.distancia(punto4) << endl;
}
```
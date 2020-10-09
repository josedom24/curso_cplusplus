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

Por ejemplo:

    class Punto3d: public Punto
    {
        ...
    }

Vemos que la clase base la podemos definir con dos tipos de acceso:

* `public`: los miembros heredados de la clase base conservan el tipo de acceso con que fueron declarados en ella.
* `private`: todos los miembros heredados de la clase base pasan a ser miembros privados en la clase derivada.

En esta introducción vamos a indicar el tipo de acceso `public`.

Además vamos añadir un nuevo tipo de acceso a la declaración de los miembros en la clase base. Habíamos visto el tipo de acceso `public` (se pueden acceder desde el exterior) y el `private` (no se pueden acceder desde el exterior, usamos un método para ello). Ahora incluimos un nuevo tipo de acceso pensando en la herencia:

* `protected`: Que nos permite que los datos no sean inaccesibles desde el exterior de las clases, pero a la vez, permite que sean accesibles desde las clases derivadas.

## Constructores en clases derivadas

Cuando se crea un objeto de una clase derivada, primero se invoca al constructor de la clase o clases base y a continuación al constructor de la clase derivada. 

Cuando queramos inicializar las clases base usando parámetros desde el constructor de una clase derivada lo haremos de este modo:

    <clase_derivada>(<lista_de_parámetros>) :  <clase_base>(<lista_de_parámetros>) 
    {
        ...
    }
Es decir, el constructor de la clase derivada recibe todos los parámetros y llama al constructor de la clase base envíando los parámetros adecuados para finalmente inicializar los atributos que le son propio. Por ejemplo:

    Punto3d::Punto3d(float nx,float ny, float nz):Punto(nx,ny)
    {   
	    z=nz;
    }

Si nuestra clase base es la clase `Punto` estudiada en unidades anteriores, puedo crear una nueva clase de la siguiente manera: [Accede al código](punto3d.cpp)

## Delegación

Llamamos delegación a la situación en la que una clase contiene (como atributos) una o más instancias de otra clase, a las que delegará parte de sus funcionalidades.
A partir de la clase punto, podemos crear la clase circulo de esta forma:

```
class Circulo
{
public:
	Punto centro;
	float radio;
	
	//Métodos
	Circulo(Punto nc,float nr);
	void mostrar();
};	

Circulo::Circulo(Punto nc,float nr)
{
	centro = nc;
	radio = nr;
}
void Circulo::mostrar()
{
	cout << "Centro:" << centro.get_x() << "-" << centro.get_y() << " - Radio:" << radio ;
}
```
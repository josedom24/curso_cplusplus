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

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
	//M�todos
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


//Circulo


class Circulo
{
public:
	Punto centro;
	float radio;
	
	//M�todos
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

int main(int argc, char *argv[]) {
	
	//Podemos crear objetos de la clase Punto
	
	Punto np(3,4);
	Circulo c1(np,6);
	c1.mostrar();
}

#include <iostream>
#include <cmath>
using namespace std;

class Punto
{
	//Atributos
public:
	float x;
	float y;
	
	//Métodos
	Punto();
	Punto(float nx, float ny);
	void mostrar();
	float distancia(Punto otro);
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


int main(int argc, char *argv[]) {
	
	Punto punto1;
	Punto punto2(4,5);
	punto1.mostrar();
	cout << endl;
	punto2.mostrar();
	cout << endl;
	cout << punto1.distancia(punto2);
	
	return 0;
}

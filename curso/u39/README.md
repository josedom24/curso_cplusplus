# Introducción a la programación orientada a objetos

La Programación Orientado a Objetos (POO) se basa en la agrupación de objetos de distintas clases que interactúan entre sí y que, en conjunto, consiguen que un programa cumpla su propósito. En Python cualquier elemento del lenguaje pertenece a una clase y todas las clases tienen el mismo rango y se utilizan del mismo modo.

## Definición de clase, objeto, atributos y métodos

* Llamamos **clase** a la representación abstracta de un concepto. Por ejemplo, "perro", "número entero" o "servidor web".
* Las clases se componen de **atributos** y **métodos**.
* Un **objeto** es cada una de las instancias de una clase.
* Los **atributos** definen las características propias del objeto y modifican su estado. Son datos asociados a las clases y a los objetos creados a partir de ellas.
* Un **atributo de objeto** se define dentro de un método y pertenece a un objeto determinado de la clase instanciada.
* Los **métodos** son bloques de código (o funciones) de una clase que se utilizan para definir el comportamiento de los objetos.


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

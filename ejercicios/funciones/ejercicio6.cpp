//################################################################################
//Diseñar una función que calcule el área y el perímetro de una circunferencia. 
//Utiliza dicha función en un programa principal que lea el radio de una 
//circunferencia y muestre su área y perímetro.
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;
//Declaración de la función
void CalcularAreaPerimetro(float radio,float &area, float &perimetro);	

int main(int argc, char *argv[]) {
 	float radio,area,perimetro;
	cout << "Introduce el radio:";
	cin >> radio;
	CalcularAreaPerimetro(radio,area,perimetro);
	cout << "Área:" << area << endl;
	cout << "Perímetro:" << perimetro << endl;
	return 0;
}


//################################################################################
//Procedimiento CalcularAreaPerimetro: recibe el radio de una circunferencia y
//devuelve el área y el perímetro.
//Parámetros de entrada: radio (real)
//Parámetros de entrada y salida: área y perímetro (real)
//################################################################################

void CalcularAreaPerimetro(float radio,float &area, float &perimetro)
{
	area = M_PI * pow(radio,2);  //M_PI es una constante con el valor de PI definida en cmath
	perimetro = 2 * M_PI * radio;
}


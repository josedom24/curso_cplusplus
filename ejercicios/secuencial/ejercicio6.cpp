//################################################################################
//Calcular la media de tres números pedidos por teclado
//################################################################################
//Análisis
//Tenemos que leer tres números y calcular la media. Suma de los tres partido 3.
//Datos de entrada: los tres números (real)
//Información de salida: la media (real)
//Variables: num1,num2,num3, media (Real).
//################################################################################
//Diseño
//1. Leer los tres números
//2. Calcular la media: (num1+num2+num3)/3
//3. Mostrar la media
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float num1,num2,num3, media;
	cout << "Introduce el número 1:";
	cin >> num1;
	cout << "Introduce el número 2:";
	cin >> num2;
	cout << "Introduce el número 3:";
	cin >> num3;
	media = (num1 + num2 + num3) / 3;
	cout << "La media es " << media << endl;	
	return 0;
}


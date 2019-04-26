//################################################################################
//Realizar un algoritmos que lea un número y que muestre su raíz cuadrada 
//y su raíz cúbica.
//PSeInt no tiene ninguna función predefinida que permita calcular la raíz cúbica,
//¿cómo se puede calcular?
//################################################################################
//Análisis
//Se piden número y se muestra la raíz cuadrada y la cúbica. 
//Datos de entrada: numero (entero).
//Información de salida: raíz cuadrada, raíz cúbica(real).
//Variables: num (entero).
//################################################################################
//Diseño
//1. Leer el número.
//2. Calcular raíz cuadrada: tenemos una función
//3. Calcular raíz cúbica: es igual que elevar el número a 1/3
//4. Mostrar las raíces
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int num;
	cout << "Dime el número:" << endl;
	cin >> num;
	cout << "Raíz cuadrada:" << sqrt(num) << endl;
	cout << "Raíz cúbica:" << pow(num,(1/3)) << endl;
	return 0;
}
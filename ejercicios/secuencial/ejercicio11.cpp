//################################################################################
//Pide al usuario dos números y muestra la "distancia" entre ellos 
//(el valor absoluto de su diferencia, de modo que el resultado sea siempre positivo).
//################################################################################
//Análisis
//Se piden dos números y se calcula el valor absoluto de la diferencia.
//Datos de entrada: dos números (entero).
//Información de salida: distancia (entero).
//Variables: num1,num2(entero).
//################################################################################
//Diseño
//1. Leer los dos números.
//2. Mostrar distancia (valor absoluto de la diferencia)
//################################################################################

#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char *argv[]) {
	int num1;
	int num2;
	cout << "Dime el número1:" << endl;
	cin >> num1;
	cout << "Dime el número2:" << endl;
	cin >> num2;
	cout << "Distancia:" << abs(num1-num2) << endl;
	return 0;
}
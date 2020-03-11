//################################################################################
//Escribir un programa que lea un año indicar si es bisiesto. 
//Nota: un año es bisiesto si es un número divisible por 4, pero no si es 
//divisible por 100, excepto que también sea divisible por 400.
//################################################################################
// Análisis
// Pedir un año y comprobar si es bisiesto.
// Datos de entrada: el año (entero)
// Información de salida: Si el año es bisiesto o no
// Variables: year (entero)
//################################################################################
// Diseño
// 1.Leer year
// 2.Si el año es divisible por 4, pero no si es divisible por 100, excepto que 
//también sea divisible por 400 mostrar "Año bisiesto"
// 3. En caso contrario, mostrar "Año no bisiesto"
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int year;
	cout << "Introduce el año:" << endl;
	cin >> year;
	if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0) {
		cout << "Año bisiesto.";
	}
	else {
		cout << "Año no bisiesto.";
	}
	return 0;
}

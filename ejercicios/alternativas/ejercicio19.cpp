//################################################################################
//Escribe un programa que pida un número entero entre uno y doce e imprima el 
//número de días que tiene el mes correspondiente.
// Si introducimos otro número nos da un error.
//################################################################################
// Análisis
// Leer un mes como entero e indica los días que tiene el mes. 
// El mes de febrero ponemos que tiene 28 o 29 días.
// Si el número introducido es incorrecto mostrar mensaje de error.
// Datos de entrada: mes (entero)
// Información de salida: cantidad de días del mes indicado o mensaje de error
// Variables: mes (entero)
//################################################################################
// Diseño
// 1. Leer mes como entero
// 2. Según el valor del mes:
// 3. Si es el 1,3,5,7,8,10,12: tiene 31 días
// 4. Si es el 2: tiene 28 o 29 días
// 5. Si es el 2,4,9,11: tiene 30 días
// 6. Si es otro número, mostrar mensaje de error
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int mes;
	cout << "Introduce el número de mes (1-12):" << endl;
	cin >> mes;
	switch(mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "31 días";
			break;
		case 2:
			cout << "28 o 29 días";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "30 días";
			break;
		default:
			cout << "Mes incorrecto";
			
	}
}

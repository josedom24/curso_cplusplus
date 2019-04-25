//################################################################################
// Escribir un programa que pregunte al usuario su nombre, y luego lo salude.
//################################################################################
// Análisis
// Tenemos que pedir un nombre por teclado y luego escribir un mensaje de saludo
// Datos de entrada: nombre (Cadena)
// Variables: nombre (Cadena)
//################################################################################
// Diseño
// 1. Leer nombre
// 2. Escribir mensaje de saludo
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char cadena[100];
	cout << "Dime tu nombre:";
	cin >> cadena;
	cout << "Hola " << cadena << endl;	
	return 0;
}

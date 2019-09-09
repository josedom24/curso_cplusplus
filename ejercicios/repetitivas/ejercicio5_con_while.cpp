//################################################################################
//Algoritmo que pida caracteres e imprima 'VOCAL' si son vocales y 'NO VOCAL' 
//en caso contrario, el programa termina cuando se introduce un asterisco.
//################################################################################
//Análisis
//Leer un carácter hasta que sea el asterisco.
//Si el carácter no es asterisco -> si es una vocal -> Muestro "Es vocal"
//Si no muestro "No es vocal"
// Datos de entrada:vamos leyendo un carácter.
// Información de salida:Mensajes: "Es vocal", "No es vocal"
// Variables:car (carácter)
//################################################################################
//Diseño
//1.- Repetir -> Leer carácter
//2.- Mientras no sea asterisco
//		3.- Si car no es el asterisco
//		4.- Si es A,E,I,O,U o a,e,i,o,u -> Mostrar "Es vocal"
//		5.-Si no mostrar "No es vocal"
//		6.- Repetir -> Leer carácter
//################################################################################
#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	string car;
	do {
		cout << "Introduce un carácter:";
		cin >> car;
	}
	while(car.size()!=1);
	while(car!= "*") {
		
		cout << "Introduce un carácter:";
		cin >> car;
	}
}


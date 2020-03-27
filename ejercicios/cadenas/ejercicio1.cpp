//################################################################################
//Escribir por pantalla cada carácter de una cadena introducida por teclado.
//################################################################################
//Análisis
//Leemos una cadena y tenemos que recorrerla (necesito un bucle que vaya desde la 
//posición 0 hasta la longitud de la cadena menos 1. En cada iteración mostramos
//un carácter (utilizamos la función subcadena).
// Datos de entrada:La cadena
// Información de salida: Cada uno de los caracteres de la cadena
// Variables: cad (caracter), posicion (entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	int posicion;
	cout << "Introduce una cadena:";
	getline(cin,cad);
	for(posicion=0;posicion<cad.length();posicion++)
	{
		cout << cad[posicion] << endl;
	}
	return 0;
}

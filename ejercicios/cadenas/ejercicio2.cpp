//################################################################################
//Realizar un programa que comprueba si una cadena leída por teclado comienza por 
//una subcadena introducida por teclado.
//################################################################################
//Análisis
//Leo una cadena y una subcadena por teclado. Obtengo la subcadena de la primera
//cadena con la misma longitud que la segunda cadena (uso la función subcadena). 
//Si son iguales significa que la primera cadena comienza por la segunda.
// Datos de entrada: Dos cadenas
// Información de salida:Mensaje indicando si la primera cadena comienza por 
//la segunda o no.
// Variables: cad, sub (caracter)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,subcad;
	cout << "Introduce una cadena:";
	getline(cin,cad);
	cout << "Introduce una subcadena:";
	getline(cin,subcad);
	if (cad.substr(0,subcad.length())==subcad)
		cout << "La cadena comienza por la subcadena";
	else
		cout << "La cadena NO comienza por la subcadena";
	return 0;
}

//################################################################################
//Realizar un programa que compruebe si una cadena contiene una subcadena.
// Las dos cadenas se introducen por teclado.
//################################################################################
//Análisis
//Leo dos cadenas. Voy a utilizar el método find.
// Información de salida: Mensaje indicando si la cadea contiene la subcadena o no.
// Variables:cad, subcad  (carácter), num_subcadenas,nsubc (entero), 
//			 indicador (lógico)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad, subcad;
	cout <<  "Introduce una cadena:";
	getline(cin,cad);
	cout <<  "Introduce una subcadena:";
	getline(cin,subcad);
	if(cad.find(subcad)!=-1)
		cout << "La cadena contiene la subcadena.";
	else
		cout << "La cadena no contiene la subcadena.";
	return 0;
}

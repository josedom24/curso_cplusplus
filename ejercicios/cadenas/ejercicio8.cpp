//################################################################################
//Realizar un programa que lea una cadena por teclado y convierta las mayúsculas a 
//minúsculas y viceversa.
//################################################################################
//Análisis
//Leo un cadena, la recorro y voy copiando cada carácter a otra cadena, teniendo en 
// cuenta que si es mayúsculas la convierto a minúsculas y viceversa.
// Datos de entrada: Cadena de caracteres
// Información de salida: Cadena con el cambio de mayúsculas a minúsculas y viceversa.
// Variables:cad, newcad  (carácter), posicion (entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,newcad;
	int posicion;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
		
	for(posicion=0;posicion<cad.length();posicion++)
	{
		if(cad[posicion]==toupper(cad[posicion]))
		{
			newcad+=tolower(cad[posicion]);
		}
		if(cad[posicion]==tolower(cad[posicion]))
		{
			newcad+=toupper(cad[posicion]);
		}
	}
	cout << "La cadena convertida es: " << newcad;
	return 0;
}

//################################################################################
//Introducir una cadena de caracteres e indicar si es un palíndromo. Una palabra 
//palíndroma es aquella que se lee igual adelante que atrás.
//################################################################################
//Análisis
//Leo una cadena. Creo una nueva cadena invirtiendo la cadena leída. Si so iguales 
//la cadena original y la inversa-> Es un palíndromo. No hemos tenido en cuanta 
//las mayúsculas y minúsculas.
// Datos de entrada: Cadena de caracteres 
// Información de salida: Mensaje indicando si es palíndromo o no.
// Variables:cad1, cad2  (carácter), posicion (entero), 
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad1,cad2;
	int posicion;
	
	cout << "Introduce una cadena:";
	getline(cin,cad1);
	for(posicion=cad1.length()-1;posicion>=0;posicion--)
		cad2+=cad1[posicion];
	if(cad1==cad2)
		cout << "Es un palíndromo";
	else
		cout << "No es un palíndromo";
	return 0;
}

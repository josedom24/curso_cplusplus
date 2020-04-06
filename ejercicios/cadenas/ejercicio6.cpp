//################################################################################
//Realizar un programa que dada una cadena de caracteres por caracteres, genere 
//otra cadena resultado de invertir la primera.
//################################################################################
//Análisis
//Leemos una cadena, la recorremos desde el final al principio y cada carácter 
//lo vamos concatenando con una nueva cadena, que inicialmente tendrá como valor
//la cadena vacía­.
// Datos de entrada: Una cadena de caracteres.
// Información de salida: La cadena invertida.
// Variables: cad,invertida (Caracter)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string cad,invertida="";
    int posicion;
    cout << "Introduce una cadena:";
    getline(cin,cad);

    for(posicion=cad.length()-1;posicion>=0;posicion--)
	    invertida += cad[posicion];
	
	cout<< "La cadena invertida es:"<< invertida;
	return 0;
}
	

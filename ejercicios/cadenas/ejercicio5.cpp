//################################################################################
//Si tenemos una cadena con un nombre y apellidos, realizar un programa que 
//muestre las iniciales en mayúsculas.
//################################################################################
//Análisis
//Tengo que ir quedándome con las primeras letras de cada palabra (las voy 
//concatenando en una variable cadena).
//Me posiciono en la primera letra de la primera palabra, a continuación 
//voy buscando un espacio, recorriendo los posibles espacios que hay entre palabras,
// y quedándome con el primer carácter de la siguiente palabra.
// Datos de entrada: Frase
// Información de salida: Iniciales
// Variables: cad, iniciales (Caracter), posicion, cont (enteros)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,iniciales="";
	int posicion=0,cont=0;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	//Recorro los posibles espacios al principio de la cadena
	while(cad[posicion]==' ')
		posicion++;
	
	//La primera inicial es la primera letra de la primera palabra
	iniciales.append(1,char(toupper(cad[posicion])));
	
	//Desde el primer carácter distinto de espacio
	for(posicion=posicion;posicion<cad.length();posicion++)
	{
		if(cad[posicion]==' ')
		{
			//No tengo en cuanta los posibles espacios que haya entre palabras
			while(cad[posicion]==' ' && posicion<=cad.length())
				posicion++;
			//La siguiente inical es la primera letra de la siguiente palabra
			iniciales.append(1,char(toupper(cad[posicion])));
		}
	}
	cout << "Iniciales:" << iniciales;
	return 0;
}

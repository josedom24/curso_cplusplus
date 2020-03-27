//################################################################################
//Pide una cadena y un carácter por teclado (valida que sea un carácter) 
//y muestra cuantas veces aparece el carácter en la cadena.
//################################################################################
//Análisis
//Leo una cadena y un carácter. Recorro la cadena y compara cada uno de
//sus caracteres con el carácter introducido, si es igual lo cuento.
// Datos de entrada: Cadena y carácter
// Información de salida: Número de veces que aparece el carácter en la cadena.
// Variables: cad, car (caracter), posicion, cont (entero)
//################################################################################


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad;
	char car;
	int posicion,cont=0;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	cout << "Introduce un carácter:";
	cin >> car;

	for(posicion=0;posicion<cad.length();posicion++)
	{
		if(cad[posicion]==car)
			cont++;
	}
	
	cout << "En la cadena " << cad << " aparecen " << cont << " veces el carácter " << car << ".";
	return 0;
}


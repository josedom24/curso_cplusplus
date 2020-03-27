//################################################################################
//Pide una cadena y un carácter por teclado (valida que sea un carácter) 
//y muestra cuantas veces aparece el carácter en la cadena.
//################################################################################
//Análisis
//Leo una cadena y un carácter. Mientras encuentre el carácter en la cadena cuento 
//la aparición del carácter.
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

	posicion=cad.find(car);
	while (posicion!=-1)
	{
		cont++;
		posicion=cad.find(car,posicion+1);
	}
	cout << "En la cadena " << cad << " aparecen " << cont << " veces el carácter " << car << ".";
	return 0;
}


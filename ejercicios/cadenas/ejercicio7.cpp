//################################################################################
//Pide una cadena y dos caracteres por teclado (valida que sea un carácter), 
//sustituye la aparición del primer carácter en la cadena por el segundo carácter.
//################################################################################
//Análisis
//Leo un cadena y dos caracteres, recorro la cadena, si encuentro un carácter 
//igual al primer carácter que he leído lo sustituyo por el segundo. 
// Datos de entrada: Cadena de caracteres, el carácter a buscar y a reemplazar.
// Información de salida: Cadena con el carácter indicado cambiado por el segundo.
// Variables:cad, newcad, car_buscar, car_sustituir (carácter), posicion (entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string cad,newcad, car_buscar,car_sustituir;
	int posicion;
	
	cout << "Introduce una cadena:";
	getline(cin,cad);
	newcad=cad;
	do
	{
		cout << "Introduce un carácter a buscar:";
		getline(cin,car_buscar);
	}
	while(car_buscar.length()!=1);
	do
	{
		cout << "Introduce un carácter para sustituir:";
		getline(cin,car_sustituir);
	}
	while(car_sustituir.length()!=1);
	
	posicion=newcad.find(car_buscar);
	while (posicion!=-1)
	{
		newcad.replace(posicion,1,car_sustituir);
		posicion=newcad.find(car_buscar,posicion+1);
	}
	
	cout << "La cadena modificada es " << newcad;
	return 0;
}

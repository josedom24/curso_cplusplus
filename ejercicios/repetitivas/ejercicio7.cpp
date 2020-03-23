//################################################################################
//Realizar una algoritmo que muestre la tabla de multiplicar de un número 
//introducido por teclado.
//################################################################################
//Análisis
//Leemos el número del que queremos mostrar la tabla
//Necesitamos un contador para contar de 1 a 10
//Tenemos que repetir 10 veces -> En cada vuelta debemos mostrar:
// el contador * el numero = resultado de la multiplicación
// Datos de entrada: El número de la tabla, y un contador de 1 a 10.
// Información de salida:Las 10 operaciones de la tabla de multiplicación
// Variables:tabla,num (enteros)
//################################################################################
//Diseño
//1.- Leer tabla
//2.- DEsde numero de 1 a 10
//	3.- Mostrar num * tabla = (num*tabla)
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int tabla,num;
	cout << "¿De qué número quieres mostrar la tabla de multiplicar?:";
	cin >> tabla;
	for(num=1;num<=10;num++)
	{
		cout << num << "*" << tabla << "=" << num*tabla << endl;
	}
	return 0;
}

//################################################################################
//Crear una función recursiva que permita calcular el factorial de un número. 
//Realiza un programa principal donde se lea un entero y se muestre el resultado 
//del factorial.
//################################################################################
#include <iostream>
using namespace std;
//Declaración de la función
int CalcularFactorial(int num);	

int main(int argc, char *argv[]) {
	int numero1;
	cout << "Número:";
	cin >> numero1;
	cout << "El factorial es: " << CalcularFactorial(numero1);
	return 0;
}

//################################################################################
//Función CalcularFactorial: Recibe un número si el número=1 devuelve que el 
//factorial es 1, sino acumula el producto del número con el cálculo del factorial 
//del numero-1. Es una función recursiva.
//Parámetros de entrada: número
////Dato devuelto: Factorial del número
//################################################################################

int CalcularFactorial(int num)
{
	if(num==1)
		return 1;
	else
		return num*CalcularFactorial(num-1);
}


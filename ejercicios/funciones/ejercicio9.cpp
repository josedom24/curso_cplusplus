//################################################################################
//Crea un programa principal que lea dos números enteros y muestre el MCD.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la funciones
int CalcularMCD(int num1,int num2);
void Intercambiar(int &mayor,int &menor);

int main(int argc, char *argv[]) {
	int numero1,numero2;
	cout << "Número 1:";
	cin >> numero1;
	cout << "Número 2:";
	cin >> numero2;
	cout << "MCD: " << CalcularMCD(numero1,numero2);
	return 0;
}

//################################################################################
//Función CalcularMCD: Recibe dos números y devuelve el MCD utilizando el método 
//de Euclides. El método de Euclides es el siguiente:
// * Se divide el número mayor entre el menor.
// * Si la división es exacta, el divisor es el MCD.
// * Si la división no es exacta, dividimos el divisor entre el resto obtenido y 
//se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el MCD.
//Parámetros de entrada: dos números
//Dato devuelto: El MCD
//################################################################################

int CalcularMCD(int num1,int num2)
{
	int resto;
	//Se divide el número mayor entre el menor.
	Intercambiar(num1,num2);
	resto = num1 % num2;
	if(resto == 0) //Si la división es exacta, el divisor es el MCD.
		return num2;
	else
		//Si la división no es exacta, dividimos el divisor entre el resto obtenido y 
		//se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el MCD.
		return CalcularMCD(num2,resto);
}

//################################################################################
//Procedimiento Intercambiar: Recibe dos números como parámetros de entrada y 
//salida e intercambia sus valores si el segundo es mayor que el primero.
//Parámetros de entrada y salida: dos números
//################################################################################

void Intercambiar(int &mayor,int &menor)
{
	int aux;
	if(mayor<menor)
	{
		aux=mayor;
		mayor=menor;
		menor=aux;
	}
}
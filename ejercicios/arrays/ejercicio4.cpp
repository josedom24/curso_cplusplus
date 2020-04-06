//################################################################################
//Programa que declare un vector de diez elementos enteros y pida números para 
//rellenarlo hasta que se llene el vector o se introduzca un número negativo. 
//Entonces se debe imprimir el vector (sólo los elementos introducidos).
//################################################################################
//Análisis
//Recorro el vector y voy inicializando sus elementos. Si introduzco un número 
//negativo salimos del bucle. También termino el bucle si introduzco todos los 
//elementos de vector. El número negativo me sirve de indicador de que hasta 
//esa posición el vector tiene elementos. 
//Recorro hasta el tamaño del vector o encuentre un número negativo para mostrar 
//los elementos del vector.
// Datos de entrada: Leo número positivos y los guardo en el vector, hasta que lea 
//un número negativo o lea todos los elementos del vector.
// Información de salida:Los elementos (números positivos) guardados en el vector.
// Variables: vector (vector de 10 enteros), indice,num (Entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 10
int main(int argc, char *argv[]) {
	int vector[TAM];
	int indice,num;
	
	//Recorro el vector y voy inicializando sus elementos
	//No uso un para, porque si introduzco un número negativo salimos del bucle.
	//También termino el bucle si introduzco todos los elementos de vector.
	//El número negativo me sirve de indicador de que hasta esa posición el vector tiene elemento-
	do
	{
		cout << "Introduce un número en el vector. Número " << indice+1 <<":";
		cin >> vector[indice];
		indice++;
	} while (indice<TAM && vector[indice-1]>=0);
	
	indice=0;
	//Recorro hasta el tamaño del vector o encuentre un número negativo.
	cout << "Elementos del vector: ";
	while(indice<=TAM-1 && vector[indice]>=0)
	{
		cout << vector[indice] << " ";
		indice++;
	}
	return 0;
}


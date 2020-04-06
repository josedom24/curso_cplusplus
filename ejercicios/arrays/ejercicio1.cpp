//################################################################################
//Realizar un programa que defina un vector llamado "vector_numeros" de 10 enteros,
// a continuaci�n lo inicialice con valores aleatorios (del 1 al 10) 
//y posteriormente muestre en pantalla cada elemento del vector junto con 
//su cuadrado y su cubo.
//################################################################################
//An�lisis
//Recorro un vector de 10 enteros y lo inicializo con valoreas aleatorios. 
//A continuaci�n lo recorro para mostrar los valores, el cuadrado y el cubo.
// Datos de entrada: Nada
// Informaci�n de salida: 10 n�meros, su cuadrado y su cubo.
// Variables: vector_numeros (vector de 10 enteros)
//################################################################################
#include <iostream>
#include <cmath>
using namespace std;
#define TAM 10
int main(int argc, char *argv[]) {
	int vector_numeros[TAM];
	int indice;
	srand(time(NULL));
	//Primer recorrido para leer el vector
	for(indice=0;indice<TAM;indice++)
		vector_numeros[indice]=rand() % 10 + 1;
	
	//Segundo recorrido para mostrar el resultado
	for(indice=0;indice<TAM;indice++)
		cout << vector_numeros[indice]<<" "<<pow(vector_numeros[indice],2)<<" "<<pow(vector_numeros[indice],3) << endl;
	return 0;
}

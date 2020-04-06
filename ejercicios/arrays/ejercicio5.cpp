//################################################################################
//Hacer un programa que inicialice un vector de números con valores aleatorios, 
//y posterior ordene los elementos de menor a mayor.
//################################################################################
//Análisis
//Inicializo el vector con valores aleatorios. Voy recorriendo el vector e
//intercambio los valores de dos elementos consecutivos si no están ordenados.
//Cada vez que hago un intercambio lo cuento, este proceso lo repito hasta que
//no haya realizado ningún cambio, el vector está ordenado.
// Datos de entrada: Nada
// Información de salida: Números del vector ordenado.
// Variables: vector (vector de 10 enteros), tam_vector,indice,aux,cambios (Entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 10
int main(int argc, char *argv[]) {
	int vector[TAM];
	int cambios,aux;
	int indice;
	srand(time(NULL));
	//Inicializo el vector con valores aleatorios.
	for(indice=0;indice<TAM;indice++)
		vector[indice]=rand() % 10 + 1;
	//Voy a repetir la ordenación hasta que no haya cambiado ningún número
	do
	{
		cambios=0;
		//Recorre hasta el antepenúltimo
		//Intercambio los valores de dos elementos consecutivos si no están ordenados
		for(indice=0;indice<TAM-1;indice++)
		{
			if(vector[indice]>vector[indice+1])
			{
				aux=vector[indice];
				vector[indice]=vector[indice+1];
				vector[indice+1]=aux;
				cambios++;
			}
		}
	}
	while(cambios!=0);
	//Recorro el vector ordenado
	for(indice=0;indice<TAM;indice++)
		cout << vector[indice] << " ";
	return 0;
}

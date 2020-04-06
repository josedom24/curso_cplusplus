//################################################################################
//Programa que declare tres vectores 'vector1', 'vector2' y 'vector3' de cinco 
//enteros cada uno, pida valores para 'vector1' y 'vector2' y calcule 
//vector3=vector1+vector2.
//################################################################################
//An?lisis
//Relleno los elementos de dos vectores. Posteriormente los recorro para sumar los
//valores y guardarlo en un tercer vector.
// Datos de entrada: N?meros para el primer vector, n?meros para el segundo vector
// Informaci?n de salida: Los n?meros del tercer vector, que es la suma de 
//los anteriores
// Variables: vector1,vector2,vector3 (vector de 12 enteros), 
//            indice, tam_vector (entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 5
int main(int argc, char *argv[]) {
	int vector1[TAM],vector2[TAM],vector3[TAM];
	int indice;
	for(indice=0;indice<TAM;indice++)
	{
		cout << "Introduce el elemento "<<indice+1<<" del vector1:";
		cin>>vector1[indice];
	}
	for(indice=0;indice<TAM;indice++)
	{
		cout << "Introduce el elemento "<<indice+1<<" del vector2:";
		cin>>vector2[indice];
	}
	for(indice=0;indice<TAM;indice++)
	{
		vector3[indice]=vector1[indice]+vector2[indice];
	}
	cout << "La suma de los vectores es:";
	for(indice=0;indice<TAM;indice++)
	{
		cout << vector3[indice]<<" ";
	}
	return 0;
}

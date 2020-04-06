//################################################################################
//Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector 
//con datos leídos por el teclado. Copia los elementos del vector en otro vector 
//pero en orden inverso, y muéstralo por la pantalla.
//################################################################################
//Análisis
//Recorro el vector1 y leo sus elementos por teclado. recorro de forma inversa 
//el vector1 y voy guardando los elementos en el vector2 (se invierten).
//Recorro el vector2 para mostrar los elementos.
// Datos de entrada: 5 cadenas de caracteres
// Información de salida: Las cinco cadena pero mostrar den orden inverso.
// Variables: vector1,vector2 (vector de 5 cadenas)
//			  tam_vector1,tam_vector2(entero)
//			  indicardor1, indicador2 (entero)
//################################################################################

#include <iostream>
using namespace std;
#define TAM 5
int main(int argc, char *argv[]) {
	string vector1[TAM],vector2[TAM];
	int pos1,pos2;
	//Recorro el vector1 y leo cada elemento por teclado.
	for(pos1=0;pos1<TAM;pos1++)
	{
		cout << "Dame la cadena " << pos1+1 << ":";
		getline(cin,vector1[pos1]);
	}
	
	pos2=0;
	//Recorro el vector1 desde el final al principio
	//Cada elemento lo guardo en el vector2
	for(pos1=TAM-1;pos1>=0;pos1--)
	{
		vector2[pos2]=vector1[pos1];
		pos2++;
	}
	//Recorro el vector2 para mostrarlo
	for(pos2=0;pos2<TAM;pos2++)
	{
		cout << "La cadena " << pos2+1 << ": " << vector2[pos2]<<endl;
	}
	return 0;
}

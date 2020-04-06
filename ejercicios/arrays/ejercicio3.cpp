//################################################################################
//Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un 
//alumno (comprendidas entre 0 y 10). A continuación debe mostrar todas las notas, 
//la nota media, la nota más alta que ha sacado y la menor.
//################################################################################
//Análisis
//Leo 5 notas (valido que sean >=0 y <=10). Guardo las notas en un vector.
//Recorro de nuevo el vector para acumular las notas, calcular la nota máxima 
//y la nota mínima. Finalmente calculo la media y muestro los valores.
// Datos de entrada:5 notas.
// Información de salida:Las notas, la nota media, nota máxima y nota mínima.
// Variables: notas(vector de 10 enteros), tam_notas,indice (entero)
//			  nota_media (real), suma,nota_max,nota_min  (entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 5
int main(int argc, char *argv[]) {
	int notas[TAM];
	float nota_media;
	int suma,nota_max,nota_min;
	int indice;
	
	for(indice=0;indice<TAM;indice++)
	{
		//Valido que sea un número >=0 y <=10.
		do
		{
			cout << "Introduce la nota " << indice+1 << ": ";
			cin >> notas[indice];
		}
		while(notas[indice]<0 || notas[indice]>10);
	}
	//Supongo que la nota máxima y la mínima es ta primera
	nota_max=notas[0];
	nota_min=notas[0];
	
	suma=0;
	for(indice=0;indice<TAM;indice++)
	{
		//Acumulo la nota para calcular la media.
		suma+=notas[indice];
		//Actualizo la nota máxima si encuentro una más grande
		if(notas[indice]>nota_max)
			nota_max=notas[indice];
			
		//Actualizo la nota mínima si encuentro una más pequeña
		if(notas[indice]<nota_min)
			nota_min=notas[indice];
	}
	//Calculo la media, teniendo en cuenta el tamaño del vector.
	nota_media=float(suma)/TAM;
	//Muestro resultados
	cout << endl;
	cout << "Notas:";
	for(indice=0;indice<TAM;indice++)
		cout << notas[indice] << " ";
	
	cout << endl;
	cout << "Nota media: " << nota_media << endl;
	cout << "Nota máxima: " << nota_max << endl;
	cout << "Nota mínima: " << nota_min << endl;
	return 0;
}
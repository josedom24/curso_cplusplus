//################################################################################
//Crea una función "calcularMaxMin" que recibe una arreglo con valores númerico y 
//devuelve el valor máximo y el mínimo. Crea un programa que pida números por 
//teclado y muestre el máximo y el mínimo, utilizando la función anterior.
//################################################################################
#include <iostream>
using namespace std;
//Declaración de la función
void CalcularMaxMin(int vector[10], int size,int &max, int &min);	

int main(int argc, char *argv[]) {
	int lista[10];
	int size_lista,i;
	int vmax,vmin;
	size_lista=10;
	srand(time(NULL));
	
	//Incializo el vector con valores aleatorios
	for(i=0;i<size_lista;i++)
	{
		lista[i]=rand() % 100 + 1;
	}
	//En la llamada le paso las variables vmax y vmin que se van a modificar en el procedimiento
	CalcularMaxMin(lista,size_lista,vmax,vmin);
	cout << "El valor máximo es " << vmax << endl;
	cout << "El valor mínimo es " << vmin << endl;
	return 0;
}


//################################################################################
//Procedimiento CalcularMaxMin: recibe un vector de enteros, su tamaño, y devuelve
// el máximo y el mínimo de los números guardados en el vector.
//Parámetros de entrada: vector de enteros y tamaño
//Parámetros de entrada y salida: valor máximo y mínimo
//################################################################################

void CalcularMaxMin(int vector[], int size,int &max, int &min)
{
	int i;
	max=vector[0];
	min=vector[0];
	for(i=0;i<size;i++)
	{
		if(max<vector[i])
			max=vector[i];
		if(min>vector[i])
			min=vector[i];
	}
}



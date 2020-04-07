//################################################################################
//Crear una función que calcule la temperatura media de un día a partir de la 
//temperatura máxima y mínima. Crear un programa principal, que utilizando la 
//función anterior, vaya pidiendo la temperatura máxima y mínima de cada día 
//y vaya mostrando la media. El programa pedirá el número de días que se van 
//a introducir.
//################################################################################
#include <iostream>
using namespace std;
//Declaración de la función
float calcularTemperaturaMedia(float temp1,float temp2);	

int main(int argc, char *argv[]) {
	float tmin,tmax;
	int cantidad,indice;
	cout << "¿Cuántas temperaturas vas a calcular?:";
	cin >> cantidad;
	for(indice=1;indice<=cantidad;indice++)
	{
		cout << "Introduce temperatura mínima:";
		cin >> tmin;
		cout << "Introduce temperatura máxima:";
		cin >> tmax;
		cout << "Temperatura media: " << calcularTemperaturaMedia(tmin,tmax) << endl;
	}
}


//################################################################################
//Función calcularTemperaturaMedia: Recibe dos números reales que representan 
//dos temperaturas y devuelve la temperatura media.
//Parámetros de entrada: dos temperaturas (real)
//Dato devuelto: La temperatura media (real)
//################################################################################

float calcularTemperaturaMedia(float temp1,float temp2)
{
	return (temp1+temp2)/2;
}

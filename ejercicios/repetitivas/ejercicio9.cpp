//################################################################################
//Escribe un programa que dados dos números, uno real (base) y un entero positivo 
//(exponente), saque por pantalla el resultado de la potencia. No se puede 
//utilizar el operador de potencia.
//################################################################################
//Análisis
//Leo la base y el exponente de una potencia. 
//El exponente me tengo que asegurar que es positivo.
//Para realizar la potencio tengo que acumular el productor de la base tantas veces
//como indique el exponente.
// Datos de entrada: La base y el exponente
// Información de salida:La potencia
// Variables:base,potencia(Real), exponente(entero), i (indice del bucle para)
//################################################################################
//Diseño
//1.- Inicializo el acumulador para multiplicación -> potencia <- 1
//2.- Leer base
//3.- Repetir -> Leer exponente -> hasta que exponente sea positivo
//4.- Desde 1 hasta el exponente
//		5.- Acumulo la multiplicación de la base -> potencia<-potencia*base
//6.- Muestro potencia
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float base, potencia;
	int exponente;

	cout <<  "Dame la base de la potencia:";
	cin >> base;
	do {
		cout <<  "Dame el exponente de la potencia:";
		cin >> exponente;
		if(exponente<0)
			cout << "ERROR: El exponente debe ser positivo" << endl;
	}		
	while(exponente < 0);
	potencia = 1;
	for(int i=1;i<=exponente;i++)
		potencia = potencia * base;
	
	cout << "Potencia:" << potencia << endl;
	return 0;
}

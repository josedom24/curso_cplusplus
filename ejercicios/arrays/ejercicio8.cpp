//################################################################################
//Queremos guardar los nombres y la edades de los alumnos de un curso. 
//Realiza un programa que introduzca el nombre y la edad de cada alumno. 
//El proceso de lectura de datos terminará cuando se introduzca como nombre 
//un asterisco (*) Al finalizar se mostrará los siguientes datos:
// * Todos lo alumnos mayores de edad.
// * Los alumnos mayores (los que tienen más edad)
//################################################################################
//Análisis
//Inicializo los vectores hasta que introduzca un "*" o llegue a final del vector.
//El * me sirve para indicar el final del vector. 
//Hago un recorrido para mostrar los alumnos mayores de edad.
//Hago un recorrido (hasta encontrar un * o llega al final) para calcular la edad
//máxima. A continuación recorro los arrays, y muestro el nombre de los alumnos
//con mayor edad.
// Datos de entrada: Nombre y edad de los alumnos, hasta meter *.
// Información de salida: Los alumnos mayores de edad, y los alumnos de mayor edad
// Variables: edad (vector de 30 enteros), nombre (vector de 30 cadenas)
//            indice, edad_max (entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 30
int main(int argc, char *argv[]) {
	int edad[TAM];
	string nombre[TAM];
	int edad_max;
	int indice=0;
	
	//Inicializo los vectores hasta que introduzca un "*" o llegue a final del vector
	//El * me sirve para indicar el final del vector
	do
	{
		cout << "Dime el nombre de un alumno:";
		getline(cin,nombre[indice]);
		
		if(nombre[indice]!="*")
		{
			cout << "Dime su edad:";
			cin >> edad[indice];
			cin.ignore(); //Más información https://es.stackoverflow.com/questions/193829/porque-es-necesario-usar-el-comando-cin-ignore-despu%C3%A9s-de-usar-cin-y-lue
		}
		indice++;
	}
	while(nombre[indice-1]!="*" && indice!=TAM);
	indice=0;
	//Calcular la edad máxima
	//El recorrido es hasta que no encuentre un * y no hayamos llegado al final del vector
	edad_max=edad[0];
	while(indice<TAM && nombre[indice]!="*")
	{
		if(edad[indice]>edad_max)
			edad_max=edad[indice];
		indice++;
	}
	// Alumnos mayores de edad
	indice=0;
	cout << "Alumnos mayores de edad" << endl;
	cout << "=======================" << endl;
	while(indice<TAM && nombre[indice]!="*")
	{
		if(edad[indice]>18)
			cout << nombre[indice] << endl;
		indice++;
	}
	// Alumnos mayores 
	indice=0;
	cout << "Alumnos mayores" << endl;
	cout << "===============" << endl;
	while(indice<TAM && nombre[indice]!="*")
	{
		if(edad[indice]==edad_max)
			cout << nombre[indice] << endl;
		indice++;
	}
	return 0;
}

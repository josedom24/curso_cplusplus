//################################################################################
//De una empresa de transporte se quiere guardar el nombre de los conductores que 
//tiene, y los kilómetros que conducen cada día de la semana.
//Para guardar esta información se van a utilizar dos arreglos:
// * Nombre: Vector para guardar los nombres de los conductores.
// * kms: Tabla para guardar los kilómetros que realizan cada día de la semana.
//Se quiere generar un nuevo vector ("total_kms") con los kilómetros totales que 
//realza cada conductor.
//Al finalizar se muestra la lista con los nombres de conductores y los kilómetros 
//que ha realizado.
//################################################################################
//Análisis
////Leo el número de conductores. Número de datos que voy a guardar en los arrays
//El número indicado debe ser menor que el máximo tamaño de los arrays
//Recorro los vectores hasta el número de conductores indicados (lo guardo en un 
//vector), leyendo el nombre  y los kms por días (lo guardo en una tabla).
//Recorro la tabla acumulando los kilómetros realizados en la última columna de 
//la tabla.
//Finalmente vuelvo a recorrer para mostrar los nombres y los km acumulados.
// Datos de entrada: El número de conductores, sus nombres y kms realizados por día
// Información de salida: Los nombres de los conductores y el total de kms realizados
// Variables: kms (tabla de 10 x 8 enteros), nombre (vector de 10 cadenas)
//			 indice_cond, indice_dias, num_conductores (enteros)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 10
#define COL 8
int main(int argc, char *argv[]) {
	string nombre[TAM];
	//8 columnas, las sietes primeras para guardar los km diarios, y la última para guardar los km acumulados
	int kms[TAM][COL];
	int num_conductores,indice_cond,indice_dias;
	string dias[7]={"Lunes","Martes","Miércoles","Jueves","Viernes","Sábado","Domingo"};
	//Leo el número de conductores. Número de datos que voy a guardar en los arrays
	do
	{
		cout << "¿Cuántos conductores tiene la empresa?:";
		cin >> num_conductores;
		cin.ignore();
		//El número indicado debe ser menor que el máximo tamaño de los arrays
		if(num_conductores>TAM)
			cout << "Cómo máximo puedo guardar la información de "<< TAM << endl;
	 }while(num_conductores>TAM);
	//Recorro los vectores hasta el número de conductores indicados
	for(indice_cond=0;indice_cond<num_conductores;indice_cond++)
	{
		cout << "Nombre del conductor " << indice_cond+1 << ":";
		//Leo el nombre
		getline(cin,nombre[indice_cond]);
		//Leo los km realizados para cada día
		for(indice_dias=0;indice_dias<7;indice_dias++)
		{
			cout << "¿Cuántos km ha realizado el "<< dias[indice_dias]<< "?:";
			cin >> kms[indice_cond][indice_dias];
			cin.ignore();
		}
	}
	//Recorro los vectores hasta el número de conductores indicados
	for(indice_cond=0;indice_cond<num_conductores;indice_cond++)
	{
		//Inicializo el acumulador por conductor
		kms[indice_cond][7]=0;
		//Acumulo los kms por día y lo guardo en un vector
		for(indice_dias=0;indice_dias<7;indice_dias++)
			kms[indice_cond][7]+=kms[indice_cond][indice_dias];
	}
	//Recorro los vectores hasta el número de conductores indicados para mostrar la información de salida
	for(indice_cond=0;indice_cond<num_conductores;indice_cond++)
	{
		cout << nombre[indice_cond]<< " ha realizado "<< kms[indice_cond][7] << " kms." << endl;
	}
	return 0;
}

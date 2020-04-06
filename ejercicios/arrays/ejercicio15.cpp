//################################################################################
// Crear un programa de ordenador para gestionar los resultados de la quiniela de 
//fútbol. Para ello vamos a utilizar dos tablas:
// Equipos: Que es una tabla de cadenas donde guardamos en cada columna el nombre 
//de los equipos de cada partido. En la quiniela se indican 15 partidos.
// Resultados: Es una tabla de enteros donde se indica el resultado. También tiene 
//dos columnas, en la primera se guarda el número de goles del equipo que está 
//guardado en la primera columna de la tabla anterior, y en la segunda los goles 
//del otro equipo.
//El programa ira pidiendo los nombres de los equipos de cada partido y el 
//resultado del partido, a continuación se imprimirá la quiniela de esa jornada.
//################################################################################
//Análisis
//Recorro las tablas para incializar el nombre de los dos quipos y el resultado del partido
//Recorro las tablas, muestro el nombre de los equipos
// Un 1 si el que juega en casa ha ganado (primer equipo gana)
// Un 2 si el que juega de visitante ha ganado (segundo equipo gana)
// Una X si hay empate
// Datos de entrada: Nombre de los dos quipos y el resultado del partido (para cada partido)
// Información de salida: Los nombres de los equipos y el resultado de la quiniela
// Variables: equipos (tabla de 15 x 2 cadenas), resultados (tabla de 15 x 2 enteros)
//			  indice (entero)
//################################################################################
#include <iostream>
using namespace std;
#define TAM 2
int main(int argc, char *argv[]) {
	string equipos[TAM][2];
	int resultados[TAM][2];
	int indice;
	
	//Recorro las tablas para incializar el nombre de los dos quipos y el resultado del partido
	for(indice=0;indice<TAM;indice++)
	{
		cout << "Introduce el nombre del equipo 1 del partido " <<  indice+1 << ":";
		getline(cin,equipos[indice][0]);
		cout << "Introduce el nombre del equipo 2 del partido " <<  indice+1 << ":";
		getline(cin,equipos[indice][1]);
		cout << "Introduce los goles metidos por el equipo " << equipos[indice][0] << ": ";
		cin>> resultados[indice][0];
		cout << "Introduce los goles metidos por el equipo " << equipos[indice][1] << ": ";
		cin>> resultados[indice][1];
		cin.ignore();
	}
	cout << "QUINIELA" << endl;
	cout << "========" << endl;
	
	//Recorro las tablas, muestro el nombre de los equipos
	// Un 1 si el que juega en casa ha ganado (primer equipo gana)
	// Un 2 si el que juega de visitante ha ganado (segundo equipo gana)
	// Una X si hay empate
	for(indice=0;indice<TAM;indice++)
	{
		if(resultados[indice][0]>resultados[indice][1])
			cout << equipos[indice][0] << " - " <<equipos[indice][0] <<" -> 1" << endl;
		else
			if(resultados[indice][0]<resultados[indice][1])
				cout << equipos[indice][0] << " - " <<equipos[indice][0] <<" -> 2" << endl;
			else
				cout << equipos[indice][0] << " - " <<equipos[indice][0] <<" -> X" << endl;
	}
	return 0;
}

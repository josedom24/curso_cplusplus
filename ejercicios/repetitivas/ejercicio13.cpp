//################################################################################
//Una empresa tiene el registro de las horas que trabaja diariamente un empleado 
//durante la semana (seis días) y requiere determinar el total de éstas, así como 
//el sueldo que recibirá por las horas trabajadas.
//################################################################################
//Análisis
//Calcular el sueldo y las horas trabajadas de un empleado en una semana (6 días).
//Hay que ir introduciendo la cantidad de horas que trabaja cada día.
//Tenemos que saber cuanto se paga la hora trabajada.
//Hay que ir acumulando las horas trabajadas cada día, para poder calcular el sueldo.
// Datos de entrada: Sueldo por hora, horas.
// Información de salida: Las horas acumuladas, y el sueldo de la semana.
// Variables: sueldo_por_hora (Real),horas, horas_acum, dia(entero)
//################################################################################
//Diseño
//1.- Inicializo las horas acumuladas
//2.- Leer sueldo por hora (sueldo)
//3.- Desde el día 1 al 6
//		4.- Leer horas trabajadas
//		5.- Acumular las horas trabajadas
//6.- Mostrar Las horas acumuladas
//7.- Mostrar el sueldo -> horas acumuladas * sueldo por hora
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	float sueldo_por_hora;
	int horas,horas_acum;
	int dia;
	
	cout << "Introduce el sueldo por hora:";
	cin >> sueldo_por_hora;
	for(dia=1;dia<=6;dia++)
	{
		cout << "¿Cuántas horas has trabajado el día " << dia << "?:";
		cin >> horas;
		horas_acum = horas_acum + horas;
	}
	cout << "Horas acumuladas en la semana:" << horas_acum;
	cout << "Sueldo:" << sueldo_por_hora*horas_acum;
	return 0;
}

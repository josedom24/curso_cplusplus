//################################################################################
//Una empresa les paga a sus empleados con base en las horas trabajadas en la semana. 
//Realice un algoritmo para determinar el sueldo semanal de N trabajadores 
//y, además, calcule cuánto pagó la empresa por los N empleados.
//################################################################################
//Análisis
//Hay que calcular el sueldo de un número de trabajadores, por lo tanto 
//necesitamos el número de trabajadores que tiene la empresa. También
//necesitamos saber el sueldo por hora,y por cada trabajador hay que pedir
//las horas que ha trabajado en la semana.
//Por cada trabajador hay que mostrar el sueldo semanal y al finalizar el programa
//mostramos el total de sueldos pagados.
// Datos de entrada: Número de trabajadores, sueldo por hora, horas trabajadas por 
//cada trabajador.
// Información de salida: Sueldo de cada trabajador, total pagado.
// Variables:horas_por_semana, horas_acum (entero), sueldo_por_hora (real)
//           trabajadores,trabajador(entero)
//################################################################################
//Diseño
//1.- Inicializo el acumulador de horas
//2.- Leer el número de trabajadores
//3.- Leer sueldo por hora
//4.- Por cada trabajador
//		5.- Leer horas trabajadas por semana
//		6.- Mostrar sueldo (horas_por_semana*sueldo_por_hora
//		7.- Acumular horas trabajadas
//8.- Mostrar total de pago (horas_acum*sueldo_por_hora)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int horas_por_semana, horas_acum;
	float sueldo_por_hora;
	int trabajadores,trabajador;
	
	cout << "¿Cuántos trabajadores tiene la empresa?:";
	cin >> trabajadores;
	cout << "Sueldo por hora:";
	cin >> sueldo_por_hora;
	for(trabajador=1; trabajador<=trabajadores; trabajador++)
	{
		cout << "¿Cuántas horas ha trabajado el trabajador " << trabajador << " ?";
		cin >> horas_por_semana;
		horas_acum = horas_acum+horas_por_semana;
		cout << "El trabajador " << trabajador << " tiene de sueldo " << horas_por_semana*sueldo_por_hora << endl; 
	}
	cout << "El pago a los " << trabajadores << " trabajadores es: " << horas_acum*sueldo_por_hora;
    return 0;
}

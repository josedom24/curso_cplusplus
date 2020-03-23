//################################################################################
//Una empresa les paga a sus empleados con base en las horas trabajadas en la semana
//Para esto, se registran los dí­as que trabajó y las horas de cada día. 
//Realice un algoritmo para determinar el sueldo semanal de N trabajadores 
//y además calcule cuánto pagó la empresa por los N empleados.
//################################################################################
//Análisis
//Hay que calcular el sueldo de un número de trabajadores, por lo tanto 
//necesitamos el número de trabajadores que tiene la empresa. También
//necesitamos saber el sueldo por hora,y por cada trabajador hay que pedir
//los días que ha trabajado en la semana y las horas que ha trabajado cada día.
//Por cada trabajador hay que mostrar el sueldo semanal y al finalizar el programa
//mostramos el total de sueldos pagados.
// Datos de entrada: Número de trabajadores, sueldo por hora, días trabajador por 
//semana,horas trabajadas por cada trabajador.
// Información de salida: Sueldo de cada trabajador, total pagado.
// Variables:horas, horas_por_trabajador, horas_acum (entero), sueldo_por_hora (real)
//           trabajadores,trabajador,dia(entero)
//################################################################################
//Diseño
//1.- Inicializo el acumulador de horas
//2.- Leer el número de trabajadores
//3.- Leer sueldo por hora
//4.- Por cada trabajador
//		5.-	Inicializar el acumulador de horas_por_trabajador
//		6.-Por cada día
//			7.- Leer horas
//			8.- Acumular horas trabajadas por trabajador
//		9.-Mostrar sueldo (horas_por_trabajador*sueldo_por_hora
//10.- Mostrar total de pago (horas_acum*sueldo_por_hora)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dias,horas;
	int horas_por_trabajador,horas_acum;
	int dia, trabajador;
	float sueldo_por_hora;
	int trabajadores;
	
	cout <<  "¿Cuántos trabajadores tiene la empresa?:";
	cin >> trabajadores;
	cout <<  "Sueldo por hora:";
	cin >> sueldo_por_hora;
	
	for(trabajador=1;trabajador<=trabajadores;trabajador++)
	{
		horas_por_trabajador=0;
		cout << "¿Cuántos dí­as ha trabajado el trabajador " << trabajador << " ?";
		cin >> dias;
		for(dia=1;dia<=dias;dia++)
		{
			cout << "¿Cuántas horas ha trabajado el trabajador " << trabajador << " el día " << dia << "?:";
			cin >> horas;
			horas_por_trabajador = horas_por_trabajador+horas;
		}
		cout << "El trabajador " << trabajador << " tiene de sueldo " << horas_por_trabajador*sueldo_por_hora << endl; 
		horas_acum = horas_acum+horas_por_trabajador;
	}
	cout << "El pago a los " << trabajadores << " trabajadores es :" << horas_acum*sueldo_por_hora;
	return 0;
}

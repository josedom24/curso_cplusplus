//################################################################################
//Crea un programa que pida un número al usuario un número de mes (por ejemplo, 
//el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. 
//Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días.
//################################################################################
//Análisis
//Guardo en un vector de 12 posiciones los días correspondiente a cada mes.
//Del mismo modo guardo en otro vector los nombres de los meses
//Leo el número de un mes (valido que sea entre 1 a 12) y hago coincide el número
//del mes con el índice de los vectores.
// Datos de entrada: Número del mes
// Información de salida: Días y nombre del mes.
// Variables: dias (vector de 12 enteros), nombre_mes (vector de 12 cadenas),
//		      mes (entero)
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string nombre_mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int mes;

	do
	{
		cout << "Introduce un mes (1-12):";
		cin >> mes;
		if(mes < 1 || mes > 12)
			cout << "Error: mes incorrecto.";
	} while (mes<1 || mes>12);
	cout << "El mes de " << nombre_mes[mes-1] << " tiene " << dias[mes-1] << " días.";
	return 0;
}

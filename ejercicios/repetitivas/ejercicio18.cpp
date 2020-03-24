//################################################################################
//Hacer un programa que muestre un cronometro, indicando las horas, minutos y segundos.
//################################################################################
//Análisis
//Necesito realizar 3 bucles anidados: el más interno es que me permite recorrer
//los segundos, el intermedio me permite recorrer los minutos y el más externo
// recorre las horas. 
// Datos de entrada: Nada
// Información de salida: La hora (hora, minutos y segundos)
// Variables: hora,minuto,segundo (entero)
//################################################################################
#include <iostream>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[]) {
	int hora,minuto,segundo;
	for(hora = 0;hora<=23;hora++)//horas
	{
		for(minuto = 0;minuto <= 59; minuto++) //minutos
		{
			for(segundo = 0;segundo<=59;segundo++) //segundos
			{
				system("clear"); //Esto funciona en linux, prueba "cls" en windows
				cout <<  hora << ":" << minuto << ":" << segundo << endl; //escribe hora:minutos:segundos (actualizandose a medida que va pasando cada segundo)
				usleep(1000000); //Espera un segundo
			}
		}
	}
	return 0;
}

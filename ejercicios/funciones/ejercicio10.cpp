//################################################################################
//Escribe un programa principal con un menú donde se pueda elegir la opción de 
//convertir a segundos, convertir a horas,minutos y segundos o salir del programa.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la funciones
void Convertir_A_HMS(int seg,int &h,int &m,int &s);
int Convertir_A_Segundos(int h,int m,int s);

int main(int argc, char *argv[]) {
	int hor,min,seg;
	int segundos;
	int opcion;
	do
	{
		cout << "1.- Convertir a segundos" << endl;
		cout << "2.- Convertir a horas, minutos y segundos" << endl;
		cout << "3.- Salir" << endl;
		cin >> opcion;
		switch(opcion)
		{
			case 1:
				cout << "Horas:";
				cin >> hor;
				cout << "Minutos:";
				cin >> min;
				cout << "Segundos:";
				cin >> seg;
				cout << "Corresponde a " << Convertir_A_Segundos(hor,min,seg) << " segundos." << endl;
				break;
			case 2:
				cout << "Segundos:";
				cin >> segundos;
				Convertir_A_HMS(segundos,hor,min,seg);
				cout << "Corresponde a " << hor << ":" << min << ":" << seg << endl;
				break;
			case 3:
				break;
			default:
				cout << "opción incorrecta" << endl;
		}
	}while(opcion!=3);
	return 0;
}

//################################################################################
//Procedimiento Convertir_A_HMS: Recibe una cantidad de segundos y debe calcular a 
//que hora, minutos y segundos corresponde 
//Parámetros de entrada: segundos
//Parámetros de entrada-salida: hora,minutos y segundos
//################################################################################

void Convertir_A_HMS(int seg,int &h,int &m,int &s)
{
	//Horas = Divisíón entera de los segundos entre 3600
	h = seg/3600;
	//Decremento los segundos que me quedan por convertir
	seg = seg - h*3600;
	//Minutos = División entera de los segundos entre 60
	m = seg/60;
	//Decremento los segundos que me quedan por convertir
	seg = seg - m*60;
	//Lo que me quedan corresponden a los segundos
	s = seg;
}
	
//################################################################################
//Función Convertir_A_Segundos: Recibe una cantidad de horas, minutos y segundos 
//y calcula a cuantos segundos corresponde.
//Parámetros de entrada: hora, minutos y segundos
//Dato devuelto: Segundos totales
//################################################################################

int Convertir_A_Segundos(int h,int m,int s)
{
	return h * 3600 + m * 60 + s;
}


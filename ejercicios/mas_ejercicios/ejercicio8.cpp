//################################################################################
//Realizar un programa que pida un mes y un año (superior a 1900) y muestre el 
//calendario del mes 
//################################################################################

#include <iostream>
using namespace std;
bool EsBisiesto(int year);
int DiasDelMes(int month,int year);
int Calcular_Dia_Juliano(int day,int month,int year);
int DiasDesde1900(int day,int month,int year);
string DevolverNombreMes(int month);
void Calendario(int month,int year);

int main(int argc, char *argv[]) {
	int month,year;
	do {
		cout << "Mes:";
		cin >> month;
	}
	while(month<1 || month>12);
	cout << "Año:";
	cin >> year;
	Calendario(month,year);
}

//################################################################################
//Función EsBisiesto: Recibe un año y devuelve si es o no bisiesto
//Parámetros de entrada: año
//Dato devuelto: Valor lógico indicando si es bisiesto (Verdadero) o no (Falso)
//################################################################################

bool EsBisiesto(int year)
{	
	if(year % 4 == 0 &&  !(year % 100 == 0) || year % 400 == 0)
		return true;
	else
		return false;
}

//################################################################################
//Función DiasDelMes: Recibe un mes y un año y devuelve el número de días que tiene 
//ese mes en ese año. Necesita la función EsBisiesto
//Parámetros de entrada: mes y año
//Dato devuelto: Días del mes en ese año
//################################################################################

int DiasDelMes(int month,int year)
{
	int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(EsBisiesto(year))
		dias[1]++;
	return dias[month-1];
}

//################################################################################
//Función Calcular_Dia_Juliano: Recibe un día, mes y año y devuelve el día juliano
//correspondiente a esa fecha. El día juliano correspondiente a una fecha es un 
//número entero que indica los días que han transcurrido desde el 1 de enero del 
//año indicado. Depende de la función DiasDelMes
//Parámetros de entrada: día, mes y año
//Dato devuelto: Día juliano
//################################################################################

int Calcular_Dia_Juliano(int day,int month,int year)
{
	int mes;
	int diaj=0;
	for(mes=1;mes<month;mes++)
	{
		diaj += DiasDelMes(mes,year);
	}
	diaj +=  day;
	return diaj;
}

//################################################################################
//Función DiasDesde1900: Recibe un día, mes y año y devuelve los días transcurridos 
//desde 1900. Por cada año se acumula 365 o 366 días, y del último año se acumula 
//el día juliano
//Parámetros de entrada: día, mes y año
//Dato devuelto: Días desde 1900
//################################################################################

int DiasDesde1900(int day,int month,int year)
{
	int dias=0, i;
	for(i=1900;i<year;i++)
	{
		if(EsBisiesto(i))
			dias=dias+366;
		else
			dias=dias+365;
	}
	return dias+Calcular_Dia_Juliano(day,month,year);
}

//################################################################################
//Función DEvolverNombreMes: Recibe un mes y devuelve el nombre del mes indicado.
//Parámetros de entrada: mes
//Dato devuelto: Nombre del mes
//################################################################################

string DevolverNombreMes(int month)
{
	string meses[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	return meses[month-1];
}
//################################################################################
//Procedimiento Calendario: Recibe un mes y un año e imprime el calendario de ese
//mes.Necesitamos calcular los días del mes, los días desde 1900 al 1 del mes y año 
//indicados, y una vez calculado le hacemos el módulo 7 y el número obtenido será 
//el día de la semana (0: domingo, 1: lunes, ...) (Tenemos que transformarlo para 
//que el 0 sea lunes.
//Escribimos espacios para desplazar el día 1 a la posición correspondiente, 
//desde el día 1 hasta el último día del mes, vamos colocando los demás días
// teniendo en cuanta que cada 7 días colocados tenemos que hacer un salto de línea.
//Parámetros de entrada:  mes y año
//################################################################################

void Calendario(int month,int year)
{
	int dias_mes,dia1,indice;
	//Calculamos los días del mes y año indicados.
	dias_mes=DiasDelMes(month,year);
	//Claculamos los días transcurridos desde 1/1/1900 al 1 del mes año indicados.
	dia1=DiasDesde1900(1,month,year);
	//Calculamos el resto de la división entre 7 (0: domingo, 1: lunes, ...)
	dia1=dia1 % 7;
	//Lo transformo para que el lunes sea el de la posición 0 y el domingo el 6
	dia1=dia1-1;
	if(dia1==-1)
		dia1=6;

	//Mostramos el nombre del mes y el año
	cout << "" << endl;
	cout << DevolverNombreMes(month)<<"/"<<year << endl;
	cout << "" << endl;
	cout << " L   M   M   J   V   S   D" << endl;
	cout << "==========================" << endl;
	//Escribo espacios hasta el día de la semana para desplazar la colocación del primer día
	for(indice=0;indice<dia1;indice++)
		cout<< "    ";

	//Desde el primer día al último
	for(indice=1;indice<=dias_mes;indice++)
	{
		//si estoy escribiendo del 1 al 9 añado espacios al principio para que se justifique a la derecha y se vea de forma adecuada
		if(indice<10)
			cout << " "<<indice<<"  ";
		else
			cout << indice<<"  ";

		//Voy incrementado el día de la semana correspondiente al día que voy a escribir a continuación
		dia1=dia1+1;
		//Si llego al Domingo (6) hay que realizar un salto de línea
		if(dia1>6)
		{
			cout << "" << endl;
			dia1=0;
		}
	}
	cout << "" << endl;
}



//################################################################################
//Queremos guardar la temperatura mínima y máxima de 5 días. realiza un programa 
//que de la siguiente información:
// * La temperatura media de cada día
// * Los días con menos temperatura
// * Se lee una temperatura por teclado y se muestran los días cuya temperatura 
//máxima coincide con ella.Si no existe ningún día se muestra un mensaje de 
//información.
//################################################################################
//Análisis
//Recorro la tabla leyendo para cada día la temperatura máxima y mínima.
//Recorro la tabla para mostrar la temperatura media de cada día.
//Recorro la tabla, para calcular la temperatura mínima, y vuelvo a recorrer para 
//mostrar los días con dicha temperatura.
//Por último pido una temperatura y recorro la tabla para mostrar el día cuya 
//temperatura máxima es igual a la temperatura indicada, o un mensaje diciendo que 
//no existe día con dicha temperatura.
// Datos de entrada: Para los cinco días introducimos temperatura máxima y mínima.
//Y al final introducimos una temperatura para buscar los días con temperatura máxima.
// Información de salida: La temperatura media de cada día, los días con temperatura 
//mínima,los días con temperaturas máxima la indicada por teclado o un mensaje 
//informando que no existe días con dicha temperatura máxima.
// Variables: temperatura (tabla de 5 x 2 enteros), existe_temperatura (lógico)
//            indice (entero), temp_max, temp_min (entero)
//################################################################################
#include <iostream>
using namespace std;
#define FIL 5
#define COL 2
int main(int argc, char *argv[]) {
	float temperatura[FIL][COL];
	bool existe_temperatura;
	int indice;
	int temp_max, temp_min;

	//Recorrido para rellenar la tabla (5 días con temp mínima y máxima)
	for(indice=0;indice<FIL;indice++)
	{
		cout << "Día " << (indice+1) << ". Temperatura mínima:";
		cin >> temperatura[indice][0];
		cout << "Día " << (indice+1) << ". Temperatura máxima:";
		cin >> temperatura[indice][1];
	}
	//Mostrar temperatura media
	cout << "Temperaturas medias" << endl;
	cout << "===================" << endl;
	for(indice=0;indice<FIL;indice++)
		cout << "Día " << (indice+1) << ". Temperatura media:" << (temperatura[indice][0]+temperatura[indice][1])/2 << endl;
	
	//Calcular temperatura mínima más pequeña
	temp_min=temperatura[0][0];
	for(indice=0;indice<FIL;indice++)
		if(temperatura[indice][0]<temp_min)
			temp_min=temperatura[indice][0];
	//Mostrar los días con menos temperatura
	cout << "Días con menos temperatura" << endl;
	cout << "==========================" << endl;
	for(indice=0;indice<FIL;indice++)
		if(temperatura[indice][0]==temp_min)
			cout << "Día " << (indice+1) << endl;
	//Días con temperatura máxima
	existe_temperatura=false;
	cout << "Días con temperatura máxima" << endl;
	cout << "===========================" << endl;
	cout << "Introduce una temperatura:";
	cin >> temp_max;
	for(indice=0;indice<FIL;indice++)
		if(temperatura[indice][1]==temp_max)
		{
			cout << "Día "<< (indice+1) << endl;
			existe_temperatura=true;
		}
	
	if (!existe_temperatura)
		cout << "No hay ningún día con dicha temperatura." << endl;
	return 0;
}

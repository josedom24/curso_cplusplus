//################################################################################
//Diseñar el algoritmo correspondiente a un programa, que:
// * Crea una tabla bidimensional de longitud 5x15 y nombre 'marco'.
// * Carga la tabla con dos únicos valores 0 y 1, donde el valor uno ocupará las 
//posiciones o elementos que delimitan la tabla, es decir, las más externas, 
//mientras que el resto de los elementos contendrán el valor 0.
// * Visualiza el contenido de la matriz en pantalla.
//################################################################################
//Análisis
//Recorro la tabla: si el indice de fila = 0 (extremo izquierdo)
// o índice de fila = número de filas -1 (extremo derecho)
// o índice de columnas = 0 (extremo superior)
// o índice de columnas = de columnas columnas -1 (extremo inferior)
// inicializo a 1, sino inicializo a 0.
//Recorro la tabla por filas y columnas para mostrar los valores.
// Datos de entrada: Nada
// Información de salida: Los valores de la tabla
// Variables: matriz (tabla de 5 x 15 enteros),fila,col (enteros)
//################################################################################
#include <iostream>
using namespace std;
#define FIL 5
#define COL 15
int main(int argc, char *argv[]) {
	int matriz[FIL][COL];
	int fila,col;
	//Recorro la tabla
	for(fila=0;fila<FIL;fila++)
	{
		for(col=0;col<COL;col++)
		{	
			//Si estoy en el extremo izquierdo, derecho, superior o inferior
			if(fila==0 || fila==FIL-1 || col==0 || col== COL-1)
				//Inicializo a 1
				matriz[fila][col]=1;
			else
				//SiNo inicializo a 0
				matriz[fila][col]=0;
		}
	}
	//Recorro para mostrar tabla
	for(fila=0;fila<FIL;fila++)
	{
		for(col=0;col<COL;col++)
		{	
			cout << matriz[fila][col];
		}
		cout << endl;
	}
	return 0;
}
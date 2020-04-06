//################################################################################
//Diseñar el algoritmo correspondiente a un programa, que:
// * Crea una tabla bidimensional de longitud 5x5 y nombre 'diagonal'.
// * Carga la tabla de forma que los componentes pertenecientes a la diagonal de la 
//matriz tomen el valor 1 y el resto el valor 0.
// * Muestra el contenido de la tabla en pantalla.
//################################################################################
//Análisis
//Recorro la tabla: si el indice de fila = indice de columna (diagonal principal)
//o indice de fila = numero de filas - 1 - indice de columnas (la otra diagonal)
// guardo un 1 sino guardo un 0.
//Recorro la tabla para mostrarla.
// Datos de entrada: Nada
// Información de salida: Los valores de la tabla
// Variables: matriz (tabla de 5 x 5 enteros),fila,col (enteros)
//################################################################################
#include <iostream>
using namespace std;
#define FIL 5
#define COL 5
int main(int argc, char *argv[]) {
	int matriz[FIL][COL];
	int fila,col;
	//Recorro la tabla
	for(fila=0;fila<FIL;fila++)
	{
		for(col=0;col<COL;col++)
		{	
			//Si estoy en alguna diagonal inicializo a 1
			if(fila==col || fila==(FIL-1)-col)
				matriz[fila][col]=1;
			//No estoy en diagonal, inicializo a 0
			else
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

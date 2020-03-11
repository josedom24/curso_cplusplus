//################################################################################
//Realizar un algoritmo que pida números (se pedirá por teclado la cantidad de 
//números a introducir). El programa debe informar de cuantos números introducidos 
//son mayores que 0, menores que 0 e iguales a 0.
//################################################################################
//Análisis
//Se pide la cantidad de números que se van a leer. Vamos introduciendo números.
//Tenemos que contar los positivos, negativos y 0.
// Datos de entrada:Cantidad de números, los números.
// Información de salida: Cantidad de positivos, de negativos y de 0.
// Variables:cantidad_num,num,cont_positivos,cant_negativos,cantidad_ceros(entero)
//################################################################################
//Diseño
//1.- Inicializo los contadores
//2.- Leer cantidad de números
//3.- Desde 1 hasta cantidad de números
//		4.- Leer num
//		5.- Si num> 0-> incremento cont_positivos
//		6.- Si num< 0-> incremento cont_negativos
//		7.- Si num = 0-> incremento cont_ceros.
// Muestro cont_postivos, cont_negativos, cont_ceros
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	int cantidad_num,i;
	int cont_negativos,cont_positivos,cont_ceros;
	cont_negativos = 0;
	cont_positivos = 0;
	cont_ceros = 0;
	cout << "¿Cuántos números vas a introducir?:";
	cin >> cantidad_num;
	for(i=1;i<=cantidad_num;i++) {
		cout << "Número " << i << ":" ;
		cin >> num;
		if(num>0) {
			cont_positivos = cont_positivos + 1;
		}
		else
		{
			if(num<0) {
				cont_negativos++;
			}
			else
			{
				cont_ceros++;
			}
		}
	}
	cout << "Números positivos:" << cont_positivos << endl;
	cout << "Números negativos:" << cont_negativos << endl;
	cout << "Números igual a 0:" << cont_ceros << endl;
	return 0;
}

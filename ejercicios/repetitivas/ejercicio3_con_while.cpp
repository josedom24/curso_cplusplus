//################################################################################
//Algoritmo que pida números hasta que se introduzca un cero. Debe imprimir la suma
// y la media de todos los números introducidos.
//################################################################################
//Análisis
//Vamos pidiendo números hasta introducir un 0.
//Necesitamos un acumulador para ir realizando las sumas intermedias.
//Además necesitamos un contador, para calcular la media (suma/cantidad)
// Datos de entrada: números, un acumulador para sumar y un contador
// Información de salida:La suma y la media
// Variables:num, suma, cont (enteros)
//################################################################################
//Diseño
//1.- Incializo: suma = 0, cont = 0
//2.- Leer num
//3.- Mientras num<>0
//     4.- Acumulo: suma = suma + num
//     5.- Cuento si num<>0: cont=cont+1
//	   6.- Leer num
//7.- Si cont=0 (No hemos introducido ningún número)-> media=0
//8.- SiNo -> media=suma/cont;
//9.- Mostrar suma y media
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	int suma,cont;
	float media;
	suma = 0;
	cont = 0;
	//Con el mientras si el primer número es 0 no va a entrar en el bucle
	cout << "Número (0 para salir):";
	cin >> num;
	while(num!=0) {
		suma = suma + num;
		cont = cont + 1;
		cout << "Número (0 para salir):";
		cin >> num;
	}
	//Si cont=0 no puedo realizar la división
	if(cont>0) {
		media = float(suma) / cont;
	}
	else
	{
		media =0;
	}
	cout << "Suma:" << suma << endl;
	cout << "Media:" << media;
	return 0;
}

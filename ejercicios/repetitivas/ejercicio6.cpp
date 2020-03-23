//################################################################################
//Escribir un programa que imprima todos los números pares entre dos números que 
//se le pidan al usuario.
//################################################################################
//Análisis
//Leemos un número. Si es impar, le sumo 1 y ya es par. Leemos el segundo número.
//Escribo el número desde el primero hasta el segundo de dos en dos.
// Datos de entrada: dos números
// Información de salida:Los números pares que hay entre los dos anteriores
// Variables:num, num1,num2 (entero)
//################################################################################
//Diseño
//1.- Leer num1,num2
//2.- Si num1 es impar -> num1=num1+1
//3.- Desde num1 hasta num2 de 2 en 2
//		4.- Escribir el número
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num,num1,num2;
	cout << "Introduce el número 1:";
	cin >> num1;
	cout << "Introduce el número 2:";
	cin >> num2;
	
	if(num1 % 2 == 1) num1++;
	
	for(num=num1;num<=num2;num=num+2)
		cout << num << " ";
	
	return 0;
}

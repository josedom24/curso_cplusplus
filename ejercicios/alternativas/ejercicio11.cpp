//################################################################################
//Programa que lea 3 datos de entrada A, B y C. Estos corresponden a las 
//dimensiones de los lados de un triángulo. 
//El programa debe determinar que tipo de triángulo es, teniendo en cuenta:
//Si se cumple Pitágoras entonces es triángulo rectángulo
//Si sólo dos lados del triángulo son iguales entonces es isósceles.
//Si los 3 lados son iguales entonces es equilátero.
//Si no se cumple ninguna de las condiciones anteriores, es escaleno.
//################################################################################
// Análisis
// Pedir la medida de los tres lados de un triángulo:
// Si se cumple el teorema de pitágoras es un triángulo rectángulo
// Además, si tienes dos lados iguales y uno desigual, es isósceles
// O si tiene todos los lados iguales es equilátero
// o si son los tres distintos es escaleno.
// Datos de entrada: los tres lados del triángulo (real)
// Información de salida: Tipo de rectángulo
// Variables: ladoA, ladoB, ladoC (real)
//################################################################################
// Diseño
// 1.Leer ladoA, ladoB, ladoC
// 2.Si se cumple el teorema de pitágoras ( tenemos que suponer que cualquier 
//lado puede ser la hipotenusa) mostrar "Triángulo rectángulo"
// 3.Si tiene dos lados iguales y uno desigual mostrar "Triángulo Isósceles"
// 4. En otro caso, si tiene los tres lados iguales, mostrar "Triángulo Equilátero"
// 5. En otro caso, mostrar "Triángulo Escaleno"
//################################################################################
// Ejemplos
//(3,4,5) rectángulo,escaleno
//(7,7,9.8994949366117) rectángulo,isósceles
//################################################################################

#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float ladoA,ladoB,ladoC;
	cout << "Introduce longitud lado A:" << endl;
	cin >> ladoA;
	cout << "Introduce longitud lado B:" << endl;
	cin >> ladoB;
	cout << "Introduce longitud lado C:" << endl;
	cin >> ladoC;
	
	//Pitágoras
	if(pow(ladoA,2)+pow(ladoB,2) == pow(ladoC,2) || pow(ladoB,2)+pow(ladoB,2) == pow(ladoA,2) || pow(ladoC,2)+pow(ladoA,2) == pow(ladoB,2)) {
		cout << "Triángulo Rectángulo";
	}
	//isósceles
	if((ladoA==ladoB && ladoA!=ladoC) || (ladoB==ladoC && ladoB!=ladoA) || (ladoC==ladoA && ladoC!=ladoB)) {
		cout << "Triángulo Isósceles";
	}
	else {
		//equilátero
		if(ladoA==ladoB && ladoA==ladoC) {
			cout << "Triángulo Equilátero";
		}
		else {
			cout << "Triángulo Escaleno";
		}
	}
	return 0;
}

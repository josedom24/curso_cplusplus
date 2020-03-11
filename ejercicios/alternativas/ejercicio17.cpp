//################################################################################
//Realiza un programa que pida por teclado el resultado (dato entero) obtenido 
//al lanzar un dado de seis caras y muestre por pantalla el número en letras 
//(dato cadena) de la cara opuesta al resultado obtenido.
//* Nota 1: En las caras opuestas de un dado de seis caras están los números: 
//1-6, 2-5 y 3-4.
//* Nota 2: Si el número del dado introducido es menor que 1 o mayor que 6, 
//se mostrará el mensaje: "ERROR: número incorrecto.".
//################################################################################
// Análisis
// Leer la cara del dado como entero 
// y mostrar el número de la cara opuesta con letras. 
// Si el número introducido es incorrecto mostrar mensaje de error.
// Datos de entrada: número de la cara (entero)
// Información de salida: número de la cara opuesta (carácter)
// Variables: cara (entero)
//################################################################################
// Diseño
// 1. Leer número de la cara
// 2. Según el valor introducido:
// 3. Si es = 1 muestro "SEIS"
// 4. Si es = 2 muestro "CINCO"
// 5. Si es = 3 muestro "CUATO"
// 6. Si es = 4 muestro "TRES"
// 7. Si es = 5 muestro "DOS"
// 8. Si es = 6 muestro "UNO"
// 9. Si es otro número, mostrar mensaje de error
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cara;
	cout << "Introduce el número de la cara:" << endl;
	cin >> cara;
	switch(cara)
	{
		case 1:
			cout << "SEIS";
			break;
		case 2:
			cout << "CINCO";
			break;
		case 3:
			cout << "CUATRO";
			break;
		case 4:
			cout << "TRES";
			break;
		case 5:
			cout << "DOS";
			break;
		case 6:
			cout << "UNO";
			break;
		default:
			cout << "Error: número incorrecto.";
	}
	return 0;
}

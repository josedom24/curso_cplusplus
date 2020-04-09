//################################################################################
//Realice un programa que pregunte aleatoriamente una multiplicación. El programa 
//debe indicar si la respuesta ha sido correcta o no (en caso que la respuesta sea 
//incorrecta el programa debe indicar cuál es la correcta). El programa preguntará 
//10 multiplicaciones, y al finalizar mostrará el número de aciertos.
//################################################################################
//Análisis
//Hacemos un bucle con 10 iteraciones, en cada iteración se inicializan dos
//números con un valor aleatorio (de 2 a 10). Se calcula la multiplicación.
//Mostramos la multiplicación, y pedimos por teclado el resultado. Si coincide 
//con la multiplicación calculada cuento un acierto, sino escribimos un mensaje
//de error mostrando el resultado correcto. Cuando salimos del bucle mostramos
//el número de aciertos.
//################################################################################
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2,resultado,num_usuario;
	int aciertos,indice;
	aciertos=0;
	srand(time(NULL));
	//Bucle de 10 iteraciones
	for(indice=1;indice<=10;indice++)
	{
		//Genero dos números aleatorios
		num1=rand() % 8 + 2;
		num2=rand() % 8 + 2;
		//Calculo la multiplicación
		resultado=num1*num2;
		//Mostramos la operación de multiplicar y pedimos al usuario que indique el resultado.
		cout << "Multiplicación " << indice << endl;
		cout << num1 << " * " << num2 << " = ";
		cin >> num_usuario;
		//Si acierta incrementamos el número de aciertos.
		if(num_usuario==resultado)
			aciertos++;
		else
			//Si no acierta muestro la respuesta correcta.
			cout << "No has acertado. La respuesta es " << resultado << endl;
	}
	//Mostramos el número de aciertos
	cout << "Tu nota ha sido: " << aciertos;
	return 0;
}

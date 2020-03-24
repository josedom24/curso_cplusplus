//################################################################################
//Mostrar en pantalla los N primero números primos. Se pide por teclado la cantidad 
//de números primos que queremos mostrar.
//################################################################################
//Análisis
//Tengo que leer la cantidad de números primos que voy a mostrar. La cantidad debe 
//ser positivo. El primer número primo es el 2 (lo muestro) a partir de este son 
//todos impares. Voy probando desde el 3 todos los impares hasta que muestre la 
//cantidad que hemos indicados (necesito un contador).
//Para comprobar si son primos, los voy dividiendo desde 3 hasta la raíz cuadrada
//del número, si es divisible por algún número no es primo (necesito un indicador).
// Datos de entrada: Cantidad de números a mostrar.
// Información de salida: Los números primos indicados.
// Variables: cant_a_mostrar, cant_mostradis, divisor (entero), es_primo(lógico)
//################################################################################
//Diseño
//1.- Leer cantidad de número primos a mostrar, debe ser positivo
//2.- Muestro el primer número primo, el 2.
//3.- Inicializo el contador de número mostrados a 1.
//4.- Inicializo la variable donde guardo el número a probar -> num=3
//4.- Mientras no haya mostrado la cantidad de número indicados
//		5.- Considero que es primo. Inicializo el indicador -> es_primo=Verdadero
//		6.- desde el 3 hasta la raíz cuadrada del número
//			7.- Si es divisible -> Ya no es primo -> es_primo=Falso
//		8.- Si es primo
//			9.- Incremento el contador de números mostrados
//			10.- Escribo el número primo
//		11.- Como son impares, incremento en 2 el número a probar
//################################################################################

#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
    int cant_a_mostrar,num,cant_mostrados,divisor;
    bool es_primo;
    do
    {
		cout << "Ingrese la cantidad de números primos a mostrar:" ;
		cin >> cant_a_mostrar;
    }
	while(cant_a_mostrar<=0);
    
    cout << "1: 2" << endl; // el primer primo es 2, los otros son todos impares...
    cant_mostrados = 1;
    num=3;            // ...a partir de 3
    
    while(cant_mostrados<cant_a_mostrar)
    {
        es_primo = true; // pienso que es primo hasta que encuentre con que dividirlo
        for(divisor=3;divisor<=sqrt(num);divisor=divisor+2) // ya sabemos que es impar
        {
            if(num % divisor == 0) // si la división da exacta...
                es_primo = false;  // ...ya no es primo
        }
		
        if(es_primo)
        {
            cant_mostrados++;
            cout << cant_mostrados << ": " << num << endl;
        }
		num = num + 2 ;
    }
    return 0;
}

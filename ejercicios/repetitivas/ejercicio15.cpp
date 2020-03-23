//################################################################################
//Una persona adquirió un producto para pagar en 20 meses. El primer mes pagó 10 
//euros, el segundo 20 euros, el tercero 40 euros y así sucesivamente. 
//Realizar un algoritmo para determinar cuánto debe pagar mensualmente y el total 
//de lo que pagó después de los 20 meses.
//################################################################################
//Análisis
//Tenemos que ir acumulando lo valores de un serie aritmética. La serie está
//formada por 20 cantidades a pagar que se van multiplicando por 2.
// Datos de entrada: Nada
// Información de salida: El pago acumulado 
// Variables: Pago, pago_acum (real), mes (entero)
//################################################################################
//Diseño
//1.- Inicializo las variables -> pago_acum<-20; pago<-10
//2.- Desde el mes 1 hasta el 20
//		3.- Acumulo el pago
//		4.- Doblo el pago
//5.- Muestro el pago acumulado
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pago, pago_acum;
	int mes;
	pago=10;
	for(mes=1;mes<=20;mes++)
	{
		pago_acum=pago_acum+pago;
		pago=pago*2;
	}
	cout << "Al final de los 20 meses tuvo que pagar: " << pago_acum;
	return 0;
}

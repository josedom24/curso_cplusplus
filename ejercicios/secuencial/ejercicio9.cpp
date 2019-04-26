//################################################################################
//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente 
//desea saber cuanto deberá pagar finalmente por su compra.
//################################################################################
//Análisis
//Debemos preguntar cuanto dinero es la compra, calcular el 15% y restarlo al total.
//Datos de entrada: precio (real).
//Información de salida: precio final (real).
//Variables: precio(real).
//################################################################################
//Diseño
//1. Leer el precio
//2. Mostrar precio final: precio - 15% del precio
//################################################################################

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float precio;
	cout << "Dime el precio:" << endl;
	cin >> precio;
	cout << "Precio final:" << precio-precio*0.15 << endl;
	return 0;
}
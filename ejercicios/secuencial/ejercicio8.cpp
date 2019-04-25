//################################################################################
//Un vendedor recibe un sueldo base mas un 10% extra por comisión de sus ventas, 
//el vendedor desea saber cuanto dinero obtendrá por concepto de comisiones por 
//las tres ventas que realiza en el mes y el total que recibirá en el mes tomando 
//en cuenta su sueldo base y comisiones.
//################################################################################
//Análisis
//El vendedor tiene un sueldo base mas una comisión del 10% por cada venta. 
//Hace tres ventas.
//Datos de entrada: sueldo base, las tres ventas (real).
//Información de salida: comisiones y sueldo total (real).
//Variables: sueldo_base, venta1, venta2, venta3, comisión(real).
//################################################################################
//Diseño
//1. Leer sueldo base
//2. Leer las tres ventas
//3. Calcular las comisiones. Suma del 10 % de cada venta.
//4. Mostrar comisión
//5. Mostrar sueldo total: sueldo_base+comisión
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sueldo_base, venta1, venta2, venta3, comision;
	cout << "Dime el sueldo base:";
	cin >> sueldo_base;
	cout << "Dime precio de la venta 1:";
	cin >> venta1;
	cout << "Dime precio de la venta 2:";
	cin >> venta2;
	cout << "Dime precio de la venta 3:";
	cin >> venta3;
	comision = venta1*0.1+venta2*0.1+venta3*0.1;
	cout << "Comisión por ventas:" << comision << endl; 
	cout << "Sueldo total:" <<  sueldo_base+comision << endl; 
	return 0;
}

//################################################################################
// Una compañía de transporte internacional tiene servicio en algunos países de 
// América del Norte, América Central, América del Sur, Europa y Asia.
// El costo por el servicio de transporte se basa en el peso del paquete 
// y la zona a la que va dirigido...
//################################################################################
// Análisis
//  El costo por el servicio de transporte se basa en el peso del paquete (gramos) 
// y la zona a la que va dirigido. 
// Paquetes de más de 5 kg no se transportan.
// Datos de entrada:peso en gramos (entero), zona (entero) del 1 al 5
// Información de salida: Precio del transporte (real)
// Variables: coste (entero), zona (entero)
//################################################################################
// Diseño
// 1. Leer peso
// 2. Si no es correcto >0 y <5000 mostrar mensaje de error
// 3. Si es correcto:
// 4. Leer zona
// 5. Según el valor de la zona calculo el coste del transporte.
// 6. Mostrar el coste de transporte.
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int peso,zona;
	cout << "¿Qué peso tiene el paquete (en gramos)?:" << endl;
	cin >> peso;
	if(peso>0 && peso<=5000) {
		cout << "1.- América del Norte\n";
		cout << "2.- América Central\n";
		cout << "3.- América del Sur\n";
		cout << "4.- Europa\n";
		cout << "5.- Asia\n";
		cout << "A que zona se reparte (1-5):" << endl;
		cin >> zona;
		switch(zona)
		{
			case 1:
				cout << "Coste: " << peso*24 << " euros.";
				break;
			case 2:
				cout << "Coste: " << peso*20 << " euros.";
				break;
			case 3:
				cout << "Coste: " << peso*21 << " euros.";
				break;
			case 4:
				cout << "Coste: " << peso*10 << " euros.";
				break;
			case 5:
				cout << "Coste: " << peso*18 << " euros.";
				break;
			default:
				cout << "Zona incorrecta.";
				
		}
	}
	else
	{
		cout << "Peso incorrecto (no podemos transportar paquetes de más de 5Kg).";
	}
}

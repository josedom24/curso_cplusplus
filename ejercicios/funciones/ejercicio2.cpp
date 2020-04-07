//################################################################################
//Crea un programa que pida dos número enteros al usuario y diga si alguno de ellos 
//es múltiplo del otro. Crea una función EsMultiplo que reciba los dos números, 
//y devuelve si el primero es múltiplo del segundo.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la función
bool EsMultiplo(int num1,int num2);	

int main(int argc, char *argv[]) {
	int numero1,numero2;
	cout << "Número 1:";
	cin >> numero1;
	cout << "Número 2:";
	cin >> numero2;
	if(EsMultiplo(numero1,numero2))
		cout << numero1 << " es múltiplo de " << numero2;
	else
		cout << numero1 << " no es múltiplo de " << numero2;
	return 0;
}

//################################################################################
//Función EsMultiplo: Recibe dos número e indica si el primero el múltiplo del 
//segundo. Para ello calculo el resto de la división, si es 0 es múltiplo.
//Parámetros de entrada: dos números
//Dato devuelto: múltiplo: Valor lógico verdadero si el primero es múltiplo 
//del segundo, Falso en caso contrario.
//################################################################################

bool EsMultiplo(int num1,int num2)
{
	if (num1 % num2==0) return true;
	else return false;
}

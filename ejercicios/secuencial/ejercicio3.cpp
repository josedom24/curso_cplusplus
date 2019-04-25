//################################################################################
//Dados los catetos de un triángulo rectángulo, calcular su hipotenusa.
//################################################################################
//Análisis
//Tenemos que leer la longitud de los dos catetos y calcular la hipotenusa. 
//(Teorema de Pitágoras)
//Variables de entrada: cateto1(real), cateto2(real)
//Variables de salida: hipotenusa(real)
//################################################################################
//Diseño
// 1. Leer la longitud de los catetos
// 2. Calcular hipotenusa (En un triángulo rectángulo el cuadrado de la hipotenusa 
// es igual a la suma de los cuadrados de los catetos. )
// Por lo tanto la hipotenusa es igual a la raí­z cuadrada de la suma de los 
// cuadrados de los catetos.
// 3. Mostrar la hipotenusa
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cateto1,cateto2,hipotenusa;
	cout << "Introduce el cateto 1:";
	cin >> cateto1;
	cout << "Introduce el cateto 2:";
	cin >> cateto2;
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	cout << "La hipotenusa es " << hipotenusa << endl;
	return 0;
}

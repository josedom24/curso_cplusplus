//################################################################################
//Programa que lea una cadena por teclado y compruebe si la primera letra es una 
//letra mayúscula.
//################################################################################
// Análisis
// Pedimos por teclado una cadena 
//y hay que comprobar que la primera letra sea mayúsculas.
// Datos de entrada: cadena (cadena)
// Información de salida: Mensajes de es mayúsculas o no es mayúsculas.
// Variables: cadena (cadena)
//################################################################################
// Diseño
// 1. Leer la cadena
// 2. Si la primera letra de la cadena es mayúsculas, 
//	  mostrar "La cadena es mayúsculas"
// 3. En caso contrario mostrar "La cadena no es mayúsculas"
//################################################################################
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string cad;
    cout << "Introduce una cadena:";
	cin >> cad;
    if (isupper(cad[0]))
    {
		cout << "La cadena es mayúsculas";
    }
    else
    {
		cout << "La cadena no es mayúsculas";
    }
    return 0;
}

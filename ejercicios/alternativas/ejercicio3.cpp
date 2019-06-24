//################################################################################
// Escribe un programa que lea un número e indique si es par o impar.
//################################################################################
// Análisis
// Tenemos que pedir un número por teclado, y comprobar si es par o impar.
// Datos de entrada: número (entero)
// Información de salida: Un mensaje de texto indicando si el número es par o impar.
// Variables: num (enteros)
//################################################################################
// Diseño
// 1. Leer el numero
// 2. Si el resto de dividir el número entre 2 es igual a 0 el número es par.
// 3. En caso contrario es impar
//################################################################################
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cout << "Dime el número:";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Es par";
    }
    else
    {
        cout << "Es impar";
    }
    return 0;
}

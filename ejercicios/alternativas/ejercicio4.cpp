//################################################################################
// Crea un programa que pida al usuario dos números y muestre su división 
//si el segundo no es cero, o un mensaje de aviso en caso contrario.
//################################################################################
// Análisis
// Tenemos que pedir dos números, y mostrar el resultado de la división. 
// Si el divisor es 0 debemos responder un mensaje de error.
// Datos de entrada: dividendo, divisor (entero)
// Información de salida: El resultado de la división o un mensaje de error 
//indicando que el divisor es igual a 0.
// Variables: dividendo,divisor (enteros)
//################################################################################
// Diseño
// 1. Leer los números
// 2. Si el divisor es igual a 0 escribir "No se puede dividir por 0"
// 3. En caso contrario mostrar el resultado de la división
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
   int dividendo, divisor;
   cout << "Dime el número 1:";
   cin >> dividendo;
   cout << "Dime el número 2:";
   cin >> divisor;
   if (divisor==0)
   {
        cout << "No puedes dividir por 0";
   }
   else
   {
       cout << "La división es " << dividendo/float(divisor);
   }
   return 0;
}

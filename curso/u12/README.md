# Entrada y salida estándar

Veamos un ejemplo para estudiar la entrada y salida estándar:

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	string nombre;
    	int edad;
    	cout << "Bienvenido..." << endl;
    	cout << "Dime el nombre:";
    	getline(cin,nombre);
    	cout << "Dime la edad de " << nombre << ":";
    	cin >> edad;
    	cout << nombre << " tiene " << edad << " años.";
    	return 0;
    }


La librería `iostrem` que incluimos al principio del programa tiene las funciones necesarias para gestionar la entra y salida estándar.

## Salida por pantalla

El identificador `cout` representa la salida estándar (pantalla). El operador `<<` nos permite enviar información a la salida estándar. Como vemos en el programa en una misma instrucciones podemos enviar a la salida estándar varias datos de distintos tipos. El identificador `endl` cambia de línea al terminar de imprimir por pantalla, sería lo mismo que imprimir un carácter `\n`.

## Entrada por teclado

El identificador `cin` representa la entrada estándar (teclado). El operador `>>` nos permite guardar la información que introducimos por teclado en una variable. El operador `>>``hace la conversión necesaria para guardar la información en la variable según del tipo que la hayamos declarado. Por ejemplo en la siguiente instrucción:

    cin >> edad;

Sabemos que edad es de tipo entero, si introducimos por teclado un dato que no sea entero, no se guardará nada en la variable y su valor será el que tiene por defecto, un 0.

## Lectura de cadenas de caracteres

Por defecto el operador `>>` no es capaz de leer los espacios que podemos poner entre palabras al leer una variable cadena, por ejemplo:

    ...
    string nombre;
  	cout << "Dime el nombre:";
    cin >> nombre;
    cout >> nombre;
    ...

Si introducimos por teclado "Pepe García", la salida del programa será "Pepe".

Por lo tanto para poder leer los espacios al leer cadenas de caracteres vamos a usar la función `getlines`, donde indicamos como parámetros el la entrada estándar (`cin`) y la variable que de tipo `string` que vamos a leer. Por ejemplo:

    ...
    string nombre;
   	cout << "Dime el nombre:";
    getline(cin,nombre);
    cout >> nombre;
    ...
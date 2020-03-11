# Introducción a las cadenas de caracteres

En C++ tenemos dos formas de trabajar con cadenas de caracteres:

* La forma tradicional del lenguaje C: una cadena de caracteres es un array de caracteres (un conjunto de caracteres).
* C++ nos ofrece la clase `string` que nos permite trabajar con cadenas de caracteres.

## Usando la clase string

Para declarar una variable de tipo cadena utilizamos el tipo de datos (que en este caso es una clase) `string`, además podemos inicializar las cadenas en la declariación, ejemplos:

    string cadena1;
    string cadena2="Hola Mundo"

## Indexación de caracteres

Los caracteres que forman una cadena se pueden referenciar por un indice (un número), de tal modo que el primer carácter está en la posición 0, el segundo en la posición 1, y así consecutivamente. Por ejemplo para imprimir el primer carácter:

    cout << cadena2[0];
    H

El método `length` o `size` nos devuelve el número de caracteres de una cadena, por ejemplo:

    cout << nombre2.length();
    10

Por lo tanto para mostrar el último carácter de la cadena (que está en la posición 9):

    cout << nombre2[nombre2.length() - 1];
    o

## Concatenación de cadenas

El operador `+` me permite unir datos de tipo cadenas.

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	string nombre="Pepe";
    	string apellidos="García";
    	string nombre_completo;
    	nombre_completo=nombre+" "+apellidos;
    	cout << nombre_completo;
    	return 0;
    }

## Comparación de cadenas de caracteres


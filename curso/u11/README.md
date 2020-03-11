# Introducción a las cadenas de caracteres

En C++ tenemos dos formas de trabajar con cadenas de caracteres. En esta unidad vamos utilizar la forma tradicional del lenguaje C para trabajar con cadenas de caracteres. Vamos a hacer una breve introducción con las cosas necesarias que necesitamos para hacer los primeros ejercicios.

Tradicionalmente en C una cadena de caracteres es un array de caracteres (un conjunto de caracteres). Al declarar la cadena indicamos el número máximo de caracteres que puede tener (el tamaño máximo de la cadena) y podemos también inciarlizarla:

    char cadena[100] = "Hola Mundo!!!";

## Indexación de caracteres

Los caracteres que forman una cadena se pueden referenciar por un indice (un número), de tal modo que el primer carácter está en la posición 0, el segundo en la posición 1, y así consecutivamente.. Por ejemplo para imprimir el primer carácter:

    cout << cadena[0];

## Algunas funciones para trabajar con cadenas


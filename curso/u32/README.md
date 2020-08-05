# Introducción a los punteros (II)

## ¿Qué son los punteros?

En el apartado anterior hemos aprendido los operadores `&` y `*` que nos permiten trabajar con las variables.El operador `*` ("contenido de una dirección de memoria) tiene que trabajar sobre posiciones de memoria, pero ¿podemos guardar la dirección de memoria de una variable en otra variable?

Un **puntero** es una variable especial en la que podemos guardar la dirección de memoria de otra variable. Se dice, entonces, que el puntero "apunta" a la variable y podemos acceder al contenido de esa variable (acceder y modificar) utilizando el puntero.

![puntero](img/puntero.png)

## Definición de puntero

Para definir un puntero hay que indicar el tipo de datos de la variable a la que va a apuntar y utilizar el `*` en su definición. Para crear un puntero que apunte a una variable entera:

	int *ptr;

Cuando en un puntero guardamos la dirección de memoria de una variable, se dice que el puntero "apunta" a esa variable. Desde ese momento podemos acceder o cambiar el contenido de la variable trabajando con el puntero. Veamos un ejemplo:

	#include <iostream>
	using namespace std;

	int main(int argc, char *argv[]) {
		int edad=10;
		int *ptr; //Definimos un puntero a entero

		ptr = &edad; //Guardamos la dirección de memoria de la variable edad en el puntero

		cout << *ptr << endl; //Mostramos el contenido de la variable apuntada por el 	puntero
		*ptr = 12; //Podemos cambiar el contenido de la variable apuntada por el puntero.
		cout << edad << endl; //Comprobamos que la variable ha cambiado
		return 0;
	}

Los punteros son una herramienta muy potente en c++ y nos aporta mucha flexibilidad a la hora de trabajar con variables. en este curso hemos hecho una introducción a los punteros, pero se puede profundizar mucho más en ellos. De las distintas funcionalidades que nos ofrecen los punteros, en este curso lo vamos a utilizar en las próximas unidades para trabajar con parámetros de entrada y salida en las funciones.

**Nota: Las imágenes de esta unidad se han obtenido de: https://www.slideshare.net/CesarOsorio2/punteros-y-funciones**
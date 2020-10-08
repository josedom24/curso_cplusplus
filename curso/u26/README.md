# Introducción a los arrays

## Estructura de datos

Hasta ahora, para hacer referencia a un dato utilizábamos una variable. El problema se plantea cuando tenemos gran cantidad de datos que guardan entre sí una relación. No podemos utilizar una variable para cada dato. 

Para resolver estas dificultades se agrupan los datos en un mismo conjunto, estos conjuntos reciben el nombre de **estructura de datos**.

## Arrays

Un array es una estructura de datos con elementos homogéneos, del mismo tipo, numérico o alfanumérico, reconocidos por un nombre en común. Para referirnos a cada elemento del array usaremos un índice (empezamos a contar por 0).

## Declaración de arrays

Para declarar un array debemos indicar el número de elementos que va a tener el array.

        <tipo> <identificador>[N1][N2]...[Nn]

Esta instrucción define un array con el nombre indicado en <identificador> y `n` dimensiones. Los `n` parámetros indican la cantidad de dimensiones y el valor máximo de cada una de ellas. La cantidad de dimensiones puede ser una o más, y la máxima cantidad de elementos debe ser una expresión numérica positiva.

Por ejemplo definimos un array de una dimensión (también llamado **vector**) de 10 elementos enteros.

	int vector[10];

Otro ejemplo, definir una array de dos dimensiones (también llamado **matriz** o **tabla**) de 3 filas y cuatro columnas de cadenas.

	string tabla[3][4];

Para acceder a un elemento de un array se utiliza un índice. El primer elemento está en la posición 0.

Para asignar un valor a un elemento del vector:
	
	vector[0]=10;

Para mostrar el primer elemento del vector:

	cout << vector[0];

Otro ejemplo asignamos y mostramos el segundo elemento de la segunda fila de la tabla:

	tabla[1][1] = "Hola";
	cout << tabla[1][1];

## Características de los arrays

* Un array es una estructura estática. Si cre un array de enteros con 10 elementos, se reservarán en memoria el espacio para guardar los 10 enteros, y durante la ejecución del programa ese tamaño no podrá cambiar.
* Al acceder o al cambiar el valor de un elemento de un array no se comprueba que estemos accediendo o modificando a un elemento del array. Es decir si tenemos un array llamado `vector` de 10 enteros, esta instrucción no producirá error:

        vector[10] = 3;

    La última posición del vector es la 9, sin embargo estamos modificando la posición 10, es decir estamos modificando una posición de memoria que no corresponde al vector.

    Del mismo modo puedo mostrar valores que están guardados en memoria y no corresponden al vector:

        cout << vector[15];

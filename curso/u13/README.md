# Pasando de pseudocódigo a C++

Antes de empezar hacer ejercicios con la estructura secuencial, vamos a ver como convertimos algunas instrucciones en pseudocódigo a C++:

## Leer variables por teclado

### Leer cadenas de caracteres

En pseudocódigo:

    Definir nombre Como Cadena;
	Escribir "Dime tu nombre:";
    Leer nombre;

En C++:

    char nombre[100];
    cout << "Dime tu nombre:";
	cin >> nombre;

### Leer números enteros

En pseudocódigo:

    Definir numero Como Entero;
	Escribir "Dime un número entero:";
    Leer numero;

En C++:

    int numero;
    cout << "Dime un número entero:";
	cin >> numero;

### Leer números reales

En pseudocódigo:

    Definir numero Como Real;
	Escribir "Dime un número real:";
    Leer numero;

En C++:

    float numero;
    cout << "Dime un número real:";
	cin >> numero;

## Escribir una variable en pantalla

En pseudocódigo:

    Escribir "Hola ",nombre;

En C++:

    cout <<  "Hola " << nombre;

## Escribir sin saltar a otra línea

En pseudocódigo:

    Escribir Sin Saltar var," ";

En C++:

    cout <<  "Hola " << nombre << endl;


## Asignar valor a una variable

En pseudocódigo:

    numero <- 7;

En C++:

    numero = 7;

Por ejemplo para incrementar el valor de una variable, en pseudocódigo:

    num <- num + 1

En C++ lo podemos hacer de dos maneras:

    num = num + 1;

O de esta forma:

    num++;

## Calcular la parte entera de una división

En pseudocódigo:

    trunc(7/2)

En C++:

    7 / 2;

## Calcular la raíz cuadrada

En pseudocódigo:

    Escribir raiz(9)

En C++:

    #include <cmath>
    cout << sqrt(9);

## Obtener el carácter de una cadena

En pseudocódigo:

    subcadena(cadena,0,0)

En C++:

    cadena[0];

## Unir dos cadenas de caracteres

En pseudocódigo:

    cadena3 <- concatenar(cadena1,cadena2)

En C++:

    cadena3 = 
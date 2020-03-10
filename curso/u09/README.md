# Tipos de datos numérico

Los principales tipos de datos numéricos son los siguientes:

* `int`: Nos permite guardar valores enteros.
* `float`: Nos permiten guardar números reales de precisión simple (7 dígitos decimales).
* `double`: Nos permite guardar números reales de doble precisión (16 dígitos decimales).

El tipo de un dato determina el tamaño de memoria que se va a utilizar para guardarlo y por lo tanto determina los valores que podemos representar.

| Tipo       | Memoria    | Rango de valores               |
| ---------- |:----------:|-------------------------------:|
| int        | 4 bytes    | -2147483648 a 2147483647       |
| float      | 4 bytes    | -3.4E+38 a +3.4E+38            |
| double     | 8 bytes    | -1.7E+308 to +1.7E+308         |

## El tipo de dato carácter

Para guardar un carácter usamos el tipo de dato `char`. Realmente el tipo de dato `char` es un tipo entero, ocupa 1 byte de memoria por lo que puede guardar 256 valores. En un variable de tipo `char` guardaremos un número que corresponde código ASCII del carácter.

Veamos un ejemplo donde se imprimen dos caracteres `a`:

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
     	char caracter1='a';
    	char caracter2=97;
    	cout << caracter1 << endl;
    	cout << caracter2 << endl;
    	return 0;
    }

## Modificadores de tipos

Podemos modificar los tipos anteriores para dos cosas: para aumentar la memoria utilizada y por lo tanto aumentar el rango de valores representables, y para indicar si se usan número negativos o no.

Los modificadores son los siguientes: `signed`, `unsigned`, `long` y `short`.

* Los modificadores `signed`, `unsigned`, `long` y `short` se pueden aplicar al tipo `int`.
* Los modificadores `signed`, `unsigned` se puede aplicar al tipo `char`.
* El modificador `long` se puede aplicar al tipo `double`.
* Los modificadores `signed`, `unsigned` tambien se pueden usar como prefijos de los modificadores `long` y `short`.

Con estas reglas nos quedarían esta tabla con todos los tipos:

| Tipo               | Memoria    | Rango de valores                           |
| -------------------|:----------:|-------------------------------------------:|
| char               | 1 byte     | -127 a 127 o 0 a 255                       |
| signed char        | 1 byte     | -127 a 127                                 |
| unsigned char      | 1 byte     | 0 a 255                                    |
| int                | 4 bytes    | -2147483648 a 2147483647                   |
| signed int         | 4 bytes    | -2147483648 a 2147483647                   |
| unsigned int       | 4 bytes    | 0 a 4294967295                             |
| short int          | 2 bytes    | -32768 a 32767                             |
| signed short int   | 2 bytes    | -32768 a 32767                             | 
| unsigned short int | 2 bytes    | 0 a 65535                                  |
| long int           | 8 bytes    | -9223372036854775808 a 9223372036854775807 |
| signed long int    | 8 bytes    | -9223372036854775808 a 9223372036854775807 |
| unsigned long int  | 8 bytes    | 0 a 18446744073709551615                   |
| float              | 4 bytes    | -3.4E+38 a +3.4E+38                        |
| double             | 8 bytes    | -1.7E+308 a +1.7E+308                      |
| long double        | 16 bytes   | 3.3621e-4932 a 1.18973e+4932               |
  

Al declarar variables podemos usar una notación corta para declarar enteros largos, cortos o sin signos, donde no tenemos que indicar el tipo `int`, por ejemplo estas dos declaraciones son correctas:

    unsigned short var1;
    long var2;

Podemos usar sufijos para indicar literales númericos largos (con el sufijo `L`) y sin signo (con el sufijo `U`). Por ejemplo:

    var1=123U;
    var2=123L;

## Conversión de tipos

* Por defecto C++ hace ciertas conversiones de forma implícitas: Por ejemplo de `char` a `int` o de `int` a `float`. Por ejemplo, esto es correcto:

        int i = 10;
        float d = i;

* Si tenemos expresiones donde hacemos operaciones entre datos del mismo tipo, el resultado de la expresión será del mismo tipo. 
* Si tenemos expresiones donde hacemos operaciones entre datos de distintos tipos el resultado de la expresión será del tipo con más precisión de los datos operados.
* Por último podemos hacer una conversión explicita usando una expresión de typecast, por ejemplo para convertir un `int` a un `float`:

        int num1=10,num2=3;
        float res;
        res=(float)num1 / float(num2) //Tenemos dos formas de hacer la conversión

Veamos un ejemplo con el operador aritmético de división:

        #include <iostream>
        using namespace std;

        int main(int argc, char *argv[]) {
            int num1=4,num2=3;
            cout << 4 / 3 << endl;
            cout << 4.0 / 3 << endl;
            cout << float(num1) / num2 << endl;
            return 0;
        }

1. El resultado de la primera instrucción `cout` es `1`, porque hemos dividido dos enteros y el resultado es entero. Realmente hemos hecho una división entero donde la parte decimal la hemos truncado.
2. El resultado de las otras instrucciones `cout` es `1.3333` ya que dividimos un `float` por un `int` y el resultado es `float`.

## Operadores aritméticos

* `+`: Suma dos números
* `-`: Resta dos números
* `*`: Multiplica dos números
* `/`: Divide dos números.
* `%`: Módulo o resto de la división
* `+`, `-`: Operadores unarios positivo y negativo
* `++`: Operador de incremento. Suma uno a la variable, `i++` es lo mismo que `i=i+1`.
* `--`: Operdor de decremento. Resta uno a la variable.



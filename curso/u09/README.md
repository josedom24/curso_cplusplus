# Variables

Una variable nos permite almacenar información. Cada variable tiene un nombre y al crearlas hay que indicar el tipo de datos que va a almacenar.

El nombre de una variable puede estar formado por letras, dígitos y subrayados, pero no puede empezar por un dígito. Los nombres se suelen indicar en minúsculas.

## Declaración de variables

Para poder usar una variable tenemos que declarar, la declaración consiste en indicar el tipo y el nombre de la variable. Además en una declaración también podemos inicializar la variable con un valor. Veamos distintos ejemplos donde declaramos variables de tipo entero:

    int variable1;
    int variable2=10;
    int variable3, variable4, variable5;
    int variable6=100, variable7=-10;

Podemos declarar una variable y posteriormente inicializarla (con el operador de asignación `=`).

    int variable8;
    variable8=1000;

Si declaramos una variable y no la inicializamos tendrá un valor por defecto: la variables numéricas tendrá un valor de `0` y los caracteres tendrán un valor de `\0`.

Las variables hay que declararla antes de usarla, pero es muy recomendable declarar todas las variables al principio de l función (esto era obligatorio en el lenguaje C).


## Ámbito de las variables

Según donde declaremos las variables podrán ser:

### Variables locales

Están definidas dentro de una función o un bloque de instrucciones. Existen y se pueden usar sólo en esa función o bloque. Ejemplo:


    #include <iostream>
    using namespace std;
    
    int main () {
       // Declaración de variable local
       int a, b;
       int c;
    
       // Inicializamos las variables
       a = 10;
       b = 20;
       c = a + b;
    
       cout << c;
    
       return 0;
    } 

### Variables globales

Están declaradas fuera de las funciones, se pueden usar en cualquier función del programa. No es recomendable su uso. Ejemplo:

    #include <iostream>
    using namespace std;
    
    // Declaración de variable global
    int g;
    
    int main () {
       // Declaración de variable local
       int a, b;
    
       // Inicializamos las variables
       a = 10;
       b = 20;
       g = a + b;
    
       cout << g;
    
       return 0;
    }

## Operadores de asignación

Nos permiten guardar información en las variables. En una variable podemos guardar un literal, otra variable o el resultado de una expresión. Los operadores de asignación son los siguientes:

* `=`: Asignación simple, por ejemplo: `a=b+7;`
* `+=`: Suma y a continuación asigna. Por ejemplo: `a+=b` es igual que `a=a+b`. También podemos usar los operadores, `-=`, `*=`, `/=`,...


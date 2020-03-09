# Literales y constantes

## Literales

Los literales nos permiten representar valores. Estos valores pueden ser de diferentes tipos, de esta manera tenemos diferentes tipos de literales:

* **Literales enteros**: Para representar números enteros utilizamos cifras enteras. Ejemplos números en base decimal: `5`,`-12`..., en base octal: `077` y en hexadecimal `0xfe`.
* **Literales reales**: Utilizamos un punto para separar la parte entera de la decimal. Por ejemplo: `3.14159`. También podemos usar la letra `e` o `E` seguida de un exponente con signo para indicar la potencia de 10 a utilizar, por ejemplo: `6.63e-34`, `35E2`. 
* **Literales booleanos o lógicos**: Los valores lógicos solo tienen dos valores: `false` para indicar el valor falso, y `true` para indicar el valor verdadero.
* **Literales carácter**: Para indicar un valor de tipo carácter usamos la comilla simple `'`. Por ejemplo `'a'`. tenemos algunos caracteres especiales que son muy útiles, por ejemplo `\n` indica nueva línea y `\t` indica tabulador.
* **Literales cadenas de caracteres**: Una cadena de caracteres es un conjunto de caracteres. Para indicar cadenas de caracteres usamos las dobles comillas `"`, por ejemplo: `"Hola"`.

## Constantes

Una constante es un valor que identificamos con un nombre cuyo valor no cambia durante la ejecución del programa. Para crear constantes usamos:

    # define identificador valor

Veamos un ejemplo:

    #include <iostream>
    using namespace std;

    #define ANCHURA 10   
    #define ALTURA  5
    #define NUEVALINEA '\n'

    int main() {
       int area;  
    
       area = ANCHURA * ALTURA;
       cout << area;
       cout << NUEVALINEA;
       return 0;
    }

Otra forma de crear constantes es usar el modificador `const` al crear una variable. Lo vermemos cuando estudiemos las variables.
# Estructuras repetitivas: for

![for](img/para.png)

La instrucción `for` ejecuta una secuencia de instrucciones un número determinado de veces.

    for(<variable> = <inicial>; <condición>; <incremento/decremento variable>
    {
    	<instrucciones>
    }


* Al ingresar al bloque, la variable `<variable>` recibe el valor `<inicial>` (1ª parte de la instrucción) y se ejecuta la secuencia de instrucciones que forma el cuerpo del ciclo. 
* Luego se incrementa/decrementa la variable como hayamos indicado (3ª parte de la instrucción) y se evalúa la condición (2ª parte de la instrucción). 
* Si la condición es verdadera se realiza otra iteración al bucle. 
* Si la condición es falsa se termina el bucle.

## Ejemplo

Escribir en pantalla del 1 al 10.


    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
        int var;
        for(var=1;var<=10;var++)
        {
            cout << var << " ";
        }
        return 0;
    }
	

Escribir en pantalla de 10 al 1.

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
        int var;
        for(var=10;var>=1;var--)
        {
            cout << var << " ";
        }
        return 0;
    }


Escribir los número pares desde el 2 al 10.


    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
        int var;
        for(var=2;var<=10;var=var+2)
        {
            cout << var << " ";
        }
        return 0;
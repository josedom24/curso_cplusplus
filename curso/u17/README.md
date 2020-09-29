# Estructuras alternativas: switch

## Alternativa múltiple: switch

![segun](img/segun.png)

La secuencia de instrucciones ejecutada por una instrucción `switch` depende del valor de una variable numérica.

    switch(expresión) 
    {
        case valor1:
            instrucciones;
            break; //opcional
        case valor2:
            instrucciones;
            break; //opcional
        ...
    default: //opcional
        statement(s);
    }

* Esta instrucción permite ejecutar opcionalmente varias acciones posibles, dependiendo del valor de una expresión.
* La expresión que se utiliza en una instrucción switch debe ser un entero (`int` o `char`).
* Un switch puede tener varios comparaciones `case` donde indicaremos el valor con el que se va a comparar, terminado por `:`. El valor debe ser del mismo tipo de la variable que hemos indicado en la instrucción `switch`.
* En el momento que una comparación `case` se ejecutarán todas las instrucciones (incluido los `case` posteriores) hasta que se encuentre una instrucción `break`.
* Podemos indicar una opción por defecto `default`, que debe aparecer al final de la instrucción y que se ejecuta sin ninguna opción anterior se ha cumplido.


### Ejemplo

Programa que pide una nota de un examen por teclado y muestra la nota como "Sobresaliente", "Notable", "Bien", "Suficiente", "Suspendido":

    #include <iostream>
    using namespace std;
    
    int main(int argc, char *argv[]) {
    	int nota;
    	cout << "Dime tu nota:";
    	cin >> nota;
    	switch(nota)
    	{
    		case 1:
    		case 2:	
    		case 3:	
    		case 4:	
    			cout << "Suspenso";
    			break;
    		case 5:
    			cout << "Suficiente";
    			break;
    		case 6:
    		case 7:
    			cout << "Bien";
    			break;
    		case 8:
    			cout << "Notable";
    			break;
    		case 9:
    		case 10:
    			cout << "Sobresaliente";
    			break;
    		default:
    			cout << "Nota incorrecta";
    	}
    	cout << endl << "Programa terminado";
    	return 0;
    }
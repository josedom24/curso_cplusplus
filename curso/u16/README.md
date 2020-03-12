# Estructuras alternativas: Si

## Alternativa simple: if

![si](img/si.png)

La estructura es la siguiente:

    if (expresión lógica)
    {
        instrucciones
    }

Al ejecutarse la instrucción `if` se evalúa la condición lógica. Si la condición lógica es `true` se ejecutan de manera secuencial el bloque de instrucciones *Acciones A*. Si la condición es `false` no se ejecuta el bloque de instrucciones. Una vez ejecutado el `si` (opción verdadera o falsa) se continúa la ejecución de forma secuencial por la siguiente instrucción detrás del final de bloque `}`. Se suelen indentar las instrucciones dentro del bloque `if` para que se más legible el código.

### Ejemplo

Programa que pida la edad y diga si es mayor de edad.

	#include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	int edad;
    	cout << "Dime tu edad:";
    	cin >> edad;
    	if (edad>=18)
    	{
    		cout << "Eres mayor de edad" << endl;
    	}
    	cout << "Programa terminado";
    	return 0;
    }


## Alternativa doble: if - else

La estructura es la siguiente:

    if (expresión lógica)
    {
        instrucciones A
    }
    else
    {
        instrucciones B
    }

![si](img/sidoble.png)

Al ejecutarse la instrucción `ifi` se evalúa la condición lógica. Si la condición lógica es `true` se ejecutan de manera secuencial el bloque de instrucciones *Acciones A*. Si la condición es `false` se ejecuta el bloque de instrucción *Acciones B*.  Una vez ejecutado el `if` (opción verdadera o falsa) se continúa la ejecución de forma secuencial por la siguiente instrucción detrás del final de bloque `}`.

### Ejemplo

Programa que pida la edad y diga si es mayor de edad o menor de edad.

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	int edad;
    	cout << "Dime tu edad:";
    	cin >> edad;
    	if (edad>=18)
    	{
    		cout << "Eres mayor de edad" << endl;
    	}
    	else
    	{
    		cout << "Eres menor de edad" << endl;
    	}
    	cout << "Programa terminado";
    	return 0;
    }
# Estructuras repetitivas: while

![mientras](img/mientras.png)

La instrucción `while` ejecuta una secuencia de instrucciones mientras una condición sea verdadera.

    while(condición) 
    {
        instrucciones;
    }
  
* Al ejecutarse esta instrucción, la condición es evaluada. Si la condición resulta verdadera, se ejecuta una vez la secuencia de instrucciones que forman el cuerpo del ciclo. Al finalizar la ejecución del cuerpo del ciclo se vuelve a evaluar la condición y, si es verdadera, la ejecución se repite. Estos pasos se repiten mientras la condición sea verdadera.
* Se puede dar la circunstancia que las instrucciones del bucle no se ejecuten nunca, si al evaluar por primera vez la condición resulta ser falsa.
* Si la condición siempre es verdadera, al ejecutar esta instrucción se produce un ciclo infinito. A fin de evitarlo, las instrucciones del cuerpo del ciclo deben contener alguna instrucción que modifique la o las variables involucradas en la condición, de modo que ésta sea falsificada en algún momento y así finalice la ejecución del ciclo.
  
## Ejemplo:

Crea un programa que pida al usuario una contraseña, de forma repetitiva mientras que no introduzca "asdasd". Cuando finalmente escriba la contraseña correcta, se le dirá "Bienvenido" y terminará el programa.

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	string  secreto, clave;
    	secreto = "asdasd";
    	cout << "Dime la clave:";
    	getline(cin,clave);
    	while (clave!=secreto)
    	{
    		cout << "Clave incorrecta!!!" << endl;
    		cout << "Dime la clave:";
    		getline(cin,clave);
    	}
    	cout << "Bienvenido!!!" << endl;
    	cout << "Programa terminado";
    	return 0;
    }

## Instrucciones break y continue

Estas instrucciones funciones en todos los tipos de bucles que vamos a estudiar.

### break

Termina la ejecución del bucle, además no ejecuta el bloque de instrucciones.

Veamos un programa similar al anterior pero que tiene otra condición de salida:

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	char otra;
    	string  secreto, clave;
    	secreto = "asdasd";
    	cout << "Dime la clave:";
    	getline(cin,clave);
    	while (clave!=secreto)
    	{
    		cout << "Clave incorrecta!!!" << endl;
    		cout << "¿Quieres introducir otra clave (S/N)?";
    		cin >> otra;
    		if (toupper(otra)=='N') break;
    		cout << "Dime la clave:";
    		getline(cin,clave);
    	}
    	if (clave == secreto) cout << "Bienvenido!!!" << endl;
    	cout << "Programa terminado";
    	return 0;
    }

### continue
    
Deja de ejecutar las restantes instrucciones del bucle y vuelve a iterar.

Aunque podemos de hacerlo de varias formas, vamos a usar la instrucción `continue` para mostrar los número pares del 1 al 10:

	#include <iostream>
	using namespace std;
	
	int main(int argc, char *argv[]) {
		int cont = 0;
		while (cont<10)
		{
			cont ++;
			if (cont % 2 != 0) continue;
			cout << cont << " ";
		}
		return 0;
	}

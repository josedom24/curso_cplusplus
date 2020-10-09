# Programación estructurada

La programación estructurada es un paradigma de programación orientado a mejorar la claridad, calidad y tiempo de desarrollo de un programa de ordenador o algoritmo, utilizando únicamente subrutinas (funciones o procedimientos) y tres estructuras: secuencia, alternativas y repetitivas.

La programación modular es un paradigma de programación que consiste en dividir un programa en módulos o subprogramas con el fin de hacerlo más legible y manejable.

Al aplicar la programación modular, un problema complejo debe ser dividido en varios subproblemas más simples, y estos a su vez en otros subproblemas más simples. Esto debe hacerse hasta obtener subproblemas lo suficientemente simples como para poder ser resueltos fácilmente con algún algoritmo (divide y vencerás). Además el uso de subrutinas nos proporciona la reutilización del código y no tener repetido instrucciones que realizan la misma tarea.

## Subrutinas en C++

Tenemos dos clases de subrutinas:

* **Funciones**: Subrutina que devuelve un valor.
* **Procedimientos**: Subrutina que no devuelve ningún resultado.

Para definir una función o procedimiento:

	tipo nombre_de_la_subrutina(argumento_1, argumento_2, ... )
	{
		acción 1;
		acción 2;
             .
             .
             .
		acción n;
	}
    
* Comienza con el tipo de datos que va a devolver la subrutina. Normalmente todas las subrutinas devuelven un valor de algún tipo (las llamamos **funciones**), pero si no se devuelve ningún dato (las llamamos **procedimientos**) y el tipo de dato es `void`.
* el nombre de la subrutina.
* Si la subrutina no recibe ningún valor pueden colocarse los paréntesis vacíos.

## Ejemplo de función

Vamos a crear una función que calcule el valor máximo de dos números:

	int CalcularMaximo(int num1,int num2)
	{
		if(num1>num2)
			return num1;
		else
			return num2;
	}

Hemos definido una función que va a devolver una variable entera. Para devolver valores usamos la instrucción `return`. Esta instrucción devuelve el valor indicado y termina la ejecución de la función.

Para utilizar dicha función en el programa principal, primero debemos definir **el prototipo de la función** antes del programa principal para que la podamos utilizar, el programa quedaría:

	#include <iostream>
	using namespace std;

	int CalcularMaximo(int num1,int num2);

	int main(int argc, char *argv[]) {
		int numero1,numero2,num_maximo;
		cout << "Dime el número1:";
		cin >> numero1;
		cout << "Dime el número2:";
		cin >> numero2;
		num_maximo = CalcularMaximo(numero1,numero2);
		cout << "El máximo es " << num_maximo;
		return 0;
	}

	int CalcularMaximo(int num1,int num2)
	{
		if(num1>num2)
			return num1;
		else
			return num2;
	}

## Ejemplo de procedimiento

Vamos a escribir un procedimiento que recibe una cadena de caracteres y lo muestra en pantalla subrayado. No devuelve ningún valor.

	#include <iostream>
	using namespace std;
	void Subrayar(string cad);

	int main(int argc, char *argv[]) {
		string nombre;
		cout << "Dame un nombre:";
		getline(cin,nombre);
		Subrayar(nombre);
		return 0;
	}

	void Subrayar(string cad)
	{
		int i;
		cout << cad << endl;
		for (i=0;i<cad.size();i++)
			cout << "-";
	}

**NOTA:** Para simplificar la terminología solemos hablar siempre de funciones, aunque sean procedimientos.Es decir, un procedimiento es una función que no devuelve ningún valor.
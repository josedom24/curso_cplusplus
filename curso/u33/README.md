# Introducción a las referencias en C++

## ¿Qué son los referencias?

La referencia en C++ es una característica específica de este lenguaje y que tiene un comportamiento muy particular; lo que se logra con esto es darle un alias a una variable que ya se encuentra en existencia para, de esta forma, lograr realizar cambios sobre dicha variable por medio de ese alias. En términos más sencillos, solo es darle otro nombre a la misma variable.

Las referencias no funcionan como los punteros pero nos puedes servir para lo mismo: modificar o acceder al valor de una variable, utilizando otra variable. Veamos un ejemplo:

	#include <iostream>
	using namespace std;
	
	int main(int argc, char *argv[]) {
		int edad = 10;
		int &ref_edad=edad;
		ref_edad=15;
		cout << edad;
		
		return 0;
	}


Como comentamos en la unidad anterior, las referencias la vamos a utilizar en este curso para trabajar con parámetros de entrada y salida cuando estudiamos las funciones.
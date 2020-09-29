# Introducción a la programación orientada a objetos

La Programación Orientado a Objetos (POO) se basa en la agrupación de objetos de distintas clases que interactúan entre sí y que, en conjunto, consiguen que un programa cumpla su propósito.


## Definición de clase, objeto, atributos y métodos

* Llamamos **clase** a la representación abstracta de un concepto. Por ejemplo, "perro", "número entero" o "servidor web".
* Las clases se componen de **miembros**.
* Los miembros de una clase pueden ser de dos tipos: **atributos** y **funciones asociadas** o **métodos**.
* Los miembros de una clase pueden ser públicos o privados. 
* Un **objeto** es cada una de las instancias de una clase. Es decir las variables de este tipo de datos que es la clase llamamos **objeto**.
* Los **atributos** definen las características propias del objeto y modifican su estado. Son datos asociados a las clases y a los objetos creados a partir de ellas.
* Un **atributo de objeto** se define dentro de un método y pertenece a un objeto determinado de la clase instanciada.
* Los **métodos** son bloques de código (o funciones) de una clase que se utilizan para definir el comportamiento de los objetos.

Para definir una clase usamos la siguiente sintaxis:

	class NOMBRE_CLASE
	{
			<atributos y métodos privados>
		public:
			<atributos y métodos públicos>
	};

Se puede usar la etiqueta `private:` para indicar los miembros privados, por defecto las declaraciones de una clase son privadas. En esta unidad vamos a trabajar con miembros públicos, en la siguiente unidad introduciremos los miembros privados.

Para declarar los método o funciones asociadas lo podemos hacer dentro de la declaración de la clase o declarando sólo el prototipo de la función e implementando la función fuera de la declaración de la clase. Está última alternativa es la que vamos a usar, y para ello es necesario cualificar el nombre de la misma con el nombre de la clase utilizando la sintaxis: `<clase>::<función>`.

Para declarar un objeto usamos la siguiente forma de declaración:

	<clase> <objeto1>,...<objetoN>

Por último para acceder a los miembros de un objeto una vez declarado vamos a usar el operador `.`.

	objeto1.atributo1
	objeto1.funcion1(...)

Veamos un ejemplo donde vamos a crear una clase para guardar la información de un *Punto*. Tendrá dos atributos para guardar el valor de la coordenada x e y. Además tendrá un método para mostrar la información del punto:

	#include <iostream>
	using namespace std;

	class Punto
	{
		//Atributos
	public:
		float x;
		float y;

		//Métodos
		void mostrar();

	};	

	void Punto::mostrar()
	{
		cout << x << "-" << y;
	}

	int main(int argc, char *argv[]) {

		Punto punto1;
		punto1.x=4;
		punto1.y=8;
		cout << punto1.x << endl;
		punto1.mostrar();

		return 0;
	}

Hemos creado un objeto `punto1` de la clase `Punto`:

	Punto punto1;

Como podemos ver al ser los miembros (atributos y métodos) públicos podemos modificarlos y usarlos desde el programa principal:

	punto1.x=4;
	punto1.y=8;
	...
	punto1.mostrar();

Y podemos obtener los valores de los atributos:

	cout << punto1.x << endl;

## Constructores

¿Qué valores tienen los atributos al crear un objeto? C++ no permite inicializar los valores de los atributos de forma automática cuando declaramos un objeto, para ello vamos a usar unos métodos especiales que llamamos **constructores**.Los constructores son métodos que se deben llamar igual que la clase y sin tipo de valor de retorno. Además como una de las características de la Programación Orientada a Objetos es la sobrecarga de funciones, podemos tener varias funciones asociadas o métodos que se llamen igual pero que reciban diferentes cantidad de parámetros o de diferentes tipos.

Veamos otro ejemplo donde hemos introducido dos constructores y otro método que nos devuelve la distancia a otro punto:

	#include <iostream>
	#include <cmath>
	using namespace std;

	class Punto
	{
		//Atributos
		public:
			float x;
			float y;

		//Métodos
		Punto();
		Punto(float nx, float ny);
		void mostrar();
		float distancia(Punto otro);
	};	

	Punto::Punto()
	{
		x=0;
		y=0;
	}
	Punto::Punto(float nx, float ny)
	{
		x=nx;
		y=ny;
	}
	void Punto::mostrar()
	{
		cout << x << "-" << y;
	}
	float Punto::distancia(Punto otro)
	{
		float dx, dy;
		dx = x - otro.x;
		dy = y - otro.y;
		return sqrt(dx*dx + dy*dy);
	}


	int main(int argc, char *argv[]) {

		Punto punto1;
		Punto punto2(4,5);
		punto1.mostrar();
		cout << endl;
		punto2.mostrar();
		cout << endl;
		cout << punto1.distancia(punto2);

		return 0;
	}

Al declarar el objeto `punto1` se utiliza el primer constructor e inicializa los dos atributos a 0, sin embargo al crear el objeto `punto2` hemos usado el segundo constructor donde los atributos se inicializan con los valores de los parámetros que recibe.

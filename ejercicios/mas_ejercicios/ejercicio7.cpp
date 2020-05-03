//################################################################################
//Diseñar un programa que permita adivinar al ordenador un determinado número
//entero y positivo para lo cual se deben leer los límites en los que está 
//comprendido dicho número.
//################################################################################						


#include <iostream>
using namespace std;
int devolverNumero(int liminf,int limsup);
char LeerOpcion(int num,int &liminf,int &limsup);

int main(int argc, char *argv[]) {
	int limite_inferior, limite_superior, minumero;
	char opcion;
	int intentos=0;

	cout << "Piensa un número..." << endl;
	//Se pide el primer intervalo
	cout << "Necesito saber el intervalo donde se encuentra el número:" << endl;
	cout << "Límite inferior:" << endl; 
	cin >> limite_inferior;
	cout << "Límite superior:" << endl; 
	cin >> limite_superior;
	//Se va repitiendo hasta que se acierte el número
	do {
		//Escribimos el número propuesto (qué sera el número intermedio del intervalo)
		minumero=devolverNumero(limite_inferior,limite_superior);
		cout << "¿Has pensando en el número?:" << minumero << endl;
		//Incrementamos el número de intentos
		intentos=intentos+1;
		//Leemos la opción, si no ha acertado se modifica algunos de los límites y se vuelve a proponer un nuevo número
		opcion=LeerOpcion(minumero,limite_inferior,limite_superior);
	}
	while(toupper(opcion!='S'));
	//Se escribe los intentos que ha necesitado para acertarlo
	cout << "Lo he acertado en " << intentos << " intentos.";
}


//################################################################################
//Función devolverNumero: Recibe un intervalo (límite inferior y superior) y 
//devuelve el número intermedio como posible número que tiene que acertar.
//Parámetro de entrada: Límite inferior y superior del intervalo.
//Dato devuelto: Número intermedio del intervalo.
//################################################################################

int devolverNumero(int liminf,int limsup)
{
	return (liminf+limsup) / 2;
}

//################################################################################
//Función LeerOpcion: Recibe un intervalo (límite inferior y superior) y el número 
//que ha propuesto como solución y devuelve la opción escogida:
//'S', si es correcto.
//'A', si es más alto que el número a adivinar.
//'B', si es más bajo. Al finalizar el programa, se deberá escribir el número de 
//intentos realizados para acertar el número.
//Si la opción es A, se modifica el límite inferior con el número propuesto.
//Si la opción es B, se modifica el límite superior con el número propuesto.
//Parámetro de entrada: Número propuesto
//Parámetro de entrada y salida: Límite inferior y superior del intervalo.
//Dato devuelto: Opción escogida
//################################################################################

char LeerOpcion(int num,int &liminf,int &limsup)
{
	char opcion;
	do
	{
		cout << "¿Es correcto?"  << endl;
		cout << "S: si es correcto."  << endl;
		cout << "A: si es más alto que el número a adivinar." << endl;
		cout << "B: si es más bajo." << endl;
		cin >> opcion;
	}
	while(toupper(opcion)!='S' && toupper(opcion)!='A' && toupper(opcion)!='B');
	if(toupper(opcion)!='A')
		liminf=num;
	if(toupper(opcion)!='B')
		limsup=num;
	return opcion;
}


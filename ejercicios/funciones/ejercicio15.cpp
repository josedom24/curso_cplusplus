//################################################################################
//Realiza un programa principal que nos permita usar funciones para manipular colas.
//################################################################################
#include <iostream>
using namespace std;
//Declaración de la funciones
void InicializarCola(string cola[], int size_cola);
int LongitudCola(string cola[],int size_cola);
bool EstaVaciaCola(string cola[],int size_cola);
bool EstaLlenaCola(string cola[],int size_cola);
void AddCola(string cad, string cola[],int size_cola);
string SacarDeLaCola(string cola[],int size_cola);
void EscribirCola(string cola[],int size_cola);

int main(int argc, char *argv[]) {
	string micola[10];
	int tam_cola;
	string elem;
	int opcion;
	tam_cola=10;
	InicializarCola(micola,tam_cola);
	do
	{
		cout << "1.- Añadir elemento a la cola" << endl;
		cout << "2.- Sacar elemento de la cola" << endl;
		cout << "3.- Longitud de la cola" << endl;
		cout << "4.- Mostrar cola" << endl;
		cout << "5.- Salir" << endl;
		cin >> opcion;
		cin.ignore();
		switch(opcion)
		{
			case 1:
				cout << "Dame la cadena para añadir a la cola:";
				getline(cin,elem);
				AddCola(elem,micola,tam_cola);
				break;
			case 2:
				cout << SacarDeLaCola(micola,tam_cola) << endl;
				break;
			case 3:
				cout << "Longitud: " << LongitudCola(micola,tam_cola) << endl;
				break;
			case 4:
				EscribirCola(micola,tam_cola);
				break;
			case 5:
			    break;
				
			default:
				cout << "Opción incorrecta" << endl;
		}
	}	
	while(opcion!=5);
	return 0;
}
//################################################################################
//Procedimiento IncializarCola: Recibe un vector (cola) y su tamaño. 
//Recorre el vector e inicializa sus elementos a *. 
//El * representa que el elemento está vacío.
//Parámetros de entrada: Tamaño del vector
//Parámetros de entrada y salida: El vector (cola)
//################################################################################

void InicializarCola(string cola[], int size_cola)
{
	int i;
	for(i=0;i<size_cola;i++)
		cola[i]="*";
}

//################################################################################
//Función LongitudCola: Recibe un vector (cola) y su tamaño. 
//Devuelve un contador con los elementos de la cola.
//Recorre el vector mientras no encuentre un * o llegue al final.
//Parámetros de entrada: Tamaño del vector, el vector (cola)
//################################################################################

int LongitudCola(string cola[],int size_cola)
{
	int size;
	size=0;
	while(size<size_cola && cola[size]!="*")
		size++;
	return size;
}
//################################################################################
//Función EstaVaciaCola: Recibe un vector (cola) y su tamaño. 
//Devuelve un valor lógico indicando si la cola está vacía.
//Está vacía si la longitud es 0.
//Parámetros de entrada: Tamaño del vector, el vector (cola)
//################################################################################

bool EstaVaciaCola(string cola[],int size_cola)
{
	if(LongitudCola(cola,size_cola)==0)
		return true;
	else
		return false;
}

//################################################################################
//Función EstaLlenaCola: Recibe un vector (cola) y su tamaño. 
//Devuelve un valor lógico indicando si la cola está llena.
//Está llena si la longitud es igual al tamaño del vector.
//Parámetros de entrada: Tamaño del vector, el vector (cola)
//################################################################################

bool EstaLlenaCola(string cola[],int size_cola)
{
	if(LongitudCola(cola,size_cola)==size_cola)
		return true;
	else
		return false;
}

//################################################################################
//Procedimiento AddCola: Recibe un vector (cola), su tamaño y un elemento (cadena)
//Si no esta llena, añade el elemento en la siguiente posición vacía,
//cuyo indice es igual a la Longitud de la cola.
//Si está llena, escribe un mensaje de error.
//Parámetro de entrada:Tamaño del vector y el elemento.
//Parámetros de entrada y salida: El vector (cola)
//################################################################################

void AddCola(string cad, string cola[],int size_cola)
{
	if(!EstaLlenaCola(cola,size_cola))
		cola[LongitudCola(cola,size_cola)]=cad;
	else
		cout << "No se puede añadir elemento. La cola está llena" << endl;
}

//################################################################################
//Función SacarCola: Recibe un vector (cola), su tamaño y devuelve 
//el elemento que se ha introducido en primer lugar, si no está vacía.
//El índice de ese elemento será el 0. Lo demás elementos se desplazan hacía el 
//primer elemento. Y el último elemento (el de la posición tamaño de la cola - 1)
//se inicializa a *.
//Si está vacía, escribe un mensaje de error.
//Parámetro de entrada:Tamaño del vector y el elemento.
//Parámetros de entrada y salida: El vector (cola)
//Dato devuelto: El elemento 
//################################################################################


string SacarDeLaCola(string cola[],int size_cola)
{
	string cad;
	int i;
	if(!EstaVaciaCola(cola,size_cola))
	{
		cad=cola[0];
		for(i=0;i<size_cola-1;i++)
			cola[i]=cola[i+1];
		cola[size_cola-1]="*";
	}
	else
	{
		cout << "No se puede sacar elemento. La cola está vacía" << endl;
		cad="";	
	}
	return cad;
}
//################################################################################
//Función EscribirCola: Recibe un vector (cola) y su tamaño. 
//Muestra los elementos del vector hasta que llegue al final o se encuentre un *.
//Parámetros de entrada: Tamaño del vector, el vector (cola)
//################################################################################

void EscribirCola(string cola[],int size_cola)
{
	int i;
	i=0;
	while(i<size_cola && cola[i]!="*")
	{
		cout << cola[i] << " ";
		i++;
	}
	cout << endl;
}

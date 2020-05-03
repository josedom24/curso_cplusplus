//################################################################################
//Vamos a programar el juego "Mastermind", para ello el programa debe "eligir" un 
//número de cuatro cifras (sin cifras repetidas), que será el código que el jugador 
//debe adivinar en la menor cantidad de intentos posibles. Cada intento consiste en 
//una propuesta de un código posible que escribe el jugador, y una respuesta del 
//programa. Las respuestas le darán pistas al jugador para que pueda deducir el código.
// * Número de "MUERTOS": Es la cantidad de dígitos que están en el número secreto 
//y en la misma posición,
// * Número de "HERIDOS:" Es la cantidad de dígitos que están en el número secreto 
//pero no en la misma posición.
//################################################################################

#include <iostream>
#include <cmath>
using namespace std;
void LeerSecuencia(int vector[]);
bool EstaRepetido(int num,int vector[]);
void GenerarSecuencia(int vector[]);
void ComprobarSecuencia(int secreto[],int usuario[],int &m, int &h);

int main(int argc, char *argv[]) {
	int indice,intentos;
	string numero;
	string resultados[100];
	int secreto[4],usuario[4];
	int muertos,heridos;
	
	//Se genera el número secreto a adivinar
	GenerarSecuencia(secreto);
	//Se repeti hasta que se acierte, número de muertos = 4
	intentos=0;
	do {
		//Leemos la secuencia propuesta por el usuario
		LeerSecuencia(usuario);
		muertos=0;
		heridos=0;
		//Se comprueba la propuesta
		ComprobarSecuencia(secreto,usuario,muertos,heridos);
		//Voy a guardar el numero, con el resultado
		numero="";
		for(indice=0;indice<4;indice++)
			numero=numero + to_string(usuario[indice]);
		//Y se imprimen los muertos y heridos
		resultados[intentos] = numero + " - MUERTOS: "+ to_string(muertos) + " - HERIDOS: "+ to_string(heridos);
		//Muestro los resultados
		//Borrar Pantalla
		for(indice=0;indice<40;indice++)
		{
			cout << ""<<endl;
		}
		intentos++;
		for(indice=intentos;indice>0; indice--)
			cout << resultados[indice-1]<< endl;
		
		
	}
	while(muertos!=4);
}

//################################################################################
//Función EstaRepetido: Recibe un número y un vector de cuatro números y comprueba
// si el número no está en el vector.
//Parámetro de entrada: Número y vector
//Dato devuelto: Valor lógico: Verdadero si el número está en el vector y falso si no.
//################################################################################

bool EstaRepetido(int num,int vector[])
{
	int indice;
	for(indice=0;indice<4;indice++)
	{
		if(num==vector[indice])
			return true;
	}
	return false;
}
//################################################################################
//Procedimiento GenerarSecuencia: Recibe un vector que se inicializa con 4 enteros 
//no repetidos
//Parámetro de entrada y salida: Vector de 4 enteros
//################################################################################

void GenerarSecuencia(int vector[])
{
	int indice;
	int num;
	//Se incializa el vector para que se pueda comprobar si tiene algún número repetido
	for(indice=0;indice<4;indice++)
		vector[indice] = -1;
	
	//Se inicializa cada elemento con un número
	for(indice=0;indice<4;indice++)
	{
		//Se comprueba que no tenga número repetidos
		do {
			num = rand() % 10;
		}
		while(EstaRepetido(num,vector));
		vector[indice]=num;
	}
}


//################################################################################
//Procedimiento LeerSecuencia: Recibe un vector que se inicializa con 4 enteros 
//leídos por teclado por el usuario, asegurando de que no se introduce ninguno 
//repetido.
//Parámetro de entrada y salida: Vector de 4 enteros
//################################################################################

void LeerSecuencia(int vector[]	)
{
	int indice,num;
	bool repetido;
	//Se inicializa el vector para que se pueda comprobar si tiene algún número repetido
	for(indice=0;indice<4;indice++)
		vector[indice] = -1;
	
	//Se inicializa cada elemento con un número leído por teclado
	for(indice=0;indice<4;indice++)
	{
		do { //Se comprueba que el número leído no se haya repetido
			cout <<  "Número " << indice+1 << ":";
			cin >> num;
			repetido = EstaRepetido(num,vector);
			if(repetido)
				cout << "No debes indicar números repetidos." << endl;
		}
		while(repetido);
		vector[indice]=num;
	}
}

//################################################################################
//Procedimiento ComprobarSecuencia: Recibe dos vectores, el secreto y el introducido
//por el usuario y devuelve el número de coincidencias en la misma posición (muertos)
// y las coincidencias en distintas posición (heridos).
//Parámetros de entrada: Dos vectores
//Parámetro de entrada y salida: muertos y heridos
//################################################################################

void ComprobarSecuencia(int secreto[],int usuario[],int &m, int &h)
{
	int indice_secreto,indice_usuario;
	//recorro los dos vectores
	for(indice_secreto=0;indice_secreto<4;indice_secreto++)
	{
		for(indice_usuario=0;indice_usuario<4;indice_usuario++)
		{
			if(secreto[indice_secreto]==usuario[indice_usuario])
			{
				//Si el elemento coincide y además están en la misma posición, incremento los muertos.
				if(indice_secreto==indice_usuario)
					m++;
				else
					//Si el elemento coincide pero no están en la misma posición, incremento los heridos.
					h++;
			}
		}
	}
}



//################################################################################
//Crear un programa que utilizando las funciones anteriores muestre un menú para 
//operar con fracciones.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la funciones
void LeerFraccion(int &num,int &den);
void SimplificarFraccion(int &num,int &den);
void EscribirFraccion(int num,int den);
void SumarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr);
void RestarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr);
void MultiplicarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr);
void DividirFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr);
int CalcularMCD(int num1,int num2);
void Intercambiar(int &mayor,int &menor);

int main(int argc, char *argv[]) {

	int num1,den1,num2,den2,numr,denr;
	int opcion;
	do
	{
		cout << "1.- Sumar dos fracciones" << endl;
		cout << "2.- Restar dos fracciones" << endl;
		cout << "3.- Multiplicar dos fracciones" << endl;
		cout << "4.- Dividir dos fracciones" << endl;
		cout << "5.- Salir" << endl;
		cin >> opcion;
		if(opcion!=5)
		{
			cout << "Fracción 1:" << endl;
			LeerFraccion(num1,den1);
			cout << "Fracción 2:" << endl;
			LeerFraccion(num2,den2);
		}
			
		switch(opcion)
		{
			case 1:
				cout << "Sumar fracciones" << endl;
				SumarFracciones(num1,den1,num2,den2,numr,denr);
				EscribirFraccion(numr,denr);
				break;
			case 2:
				cout << "Restar fracciones" << endl;
				RestarFracciones(num1,den1,num2,den2,numr,denr);
				EscribirFraccion(numr,denr);
				break;
			case 3:
				cout << "Multiplicar fracciones" << endl;
				MultiplicarFracciones(num1,den1,num2,den2,numr,denr);
				EscribirFraccion(numr,denr);
				break;
			case 4:
				cout << "Dividir fracciones" << endl;
				DividirFracciones(num1,den1,num2,den2,numr,denr);
				EscribirFraccion(numr,denr);
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
//Procedimiento LeerFracion: Lee por teclado una fracción (numerador y denominador)
// y lo devuelve como parámetro de entrada y salida.
//Este procedimiento usa SimplificarFraccion para simplificar la fracción leída.
//Parámetros de entrada y salida: numerador y denominador 
//################################################################################

void LeerFraccion(int &num,int &den)
{
	cout << "Numerador:";
	cin >> num;
	cout << "Denominador:";
	cin >> den;
	SimplificarFraccion(num,den);
}

//################################################################################
//Procedimiento SimplificarFracion: Recibe una fracción (numerador y denominador)
// y lo devuelve la fracción simplificada como parámetro ed entrada y salida.
//Para simplificar hay que dividir numerador y dominador por el MCD del numerador 
//y denominador. 
//Parámetros de entrada y salida: numerador y denominador 
//################################################################################

void SimplificarFraccion(int &num,int &den)
{
	int mcd;
	mcd = CalcularMCD(num,den);
	num = num / mcd;
	den = den / mcd;
}

//################################################################################
//Procedimiento EscribirFracion: Recibe una fracción (numerador y denominador)
// y lo muestra por pantalla. Muestra numerador partido por denominador. Si el
//denominador es 1 sólo muestra el numerador.
//Parámetros de entrada: numerador y denominador 
//################################################################################

void EscribirFraccion(int num,int den)
{
	if(den!=1)
	{
		cout << num << endl;
		cout << "---" << endl;
		cout << den << endl;
	}
	else
	{
		cout << "" << endl;
		cout << num << endl;
		cout << "" << endl;
	}
}
//################################################################################
//Procedimiento SumarFracciones: Recibe dos fracciones (numerador y denominador)
// y devuelve otra fracción que es la suma de la primera y la segunda.
//La suma de dos fracciones es otra fracción cuyo `numerador=n1*d2+d1*n2` 
//y `denominador=d1*d2`.
//Este procedimiento usa SimplificarFraccion para simplificar la fracción calculada.
//Parámetros de entrada: numerador1 y denominador1, numerador2 y denominador2
//Parámetros de entrada y salida: numerador y denominador de la fracción resultado
//################################################################################

void SumarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr)
{
	nr = n1*d2 + d1*n2;
	dr = d1 * d2;
	SimplificarFraccion(nr,dr);
}

//################################################################################
//Procedimiento RestarFracciones: Recibe dos fracciones (numerador y denominador)
// y devuelve otra fracción que es la resta de la primera y la segunda.
//La resta de dos fracciones es otra fracción cuyo `numerador=n1*d2-d1*n2` 
//y `denominador=d1*d2`.
//Este procedimiento usa SimplificarFraccion para simplificar la fracción calculada.
//Parámetros de entrada: numerador1 y denominador1, numerador2 y denominador2
//Parámetros de entrada y salida: numerador y denominador de la fracción resultado
//################################################################################

void RestarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr)
{
	nr = n1*d2 - d1*n2;
	dr = d1 * d2;
	SimplificarFraccion(nr,dr);
}

//################################################################################
//Procedimiento MultiplicarFracciones: Recibe dos fracciones (numerador y denominador)
// y devuelve otra fracción que es el producto de la primera y la segunda.
//La resta de dos fracciones es otra fracción cuyo `numerador=n1*n2` 
//y `denominador=d1*d2`
//Este procedimiento usa SimplificarFraccion para simplificar la fracción calculada.
//Parámetros de entrada: numerador1 y denominador1, numerador2 y denominador2
//Parámetros de entrada y salida: numerador y denominador de la fracción resultado
//################################################################################

void MultiplicarFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr)
{	
	nr = n1 * n2;
	dr = d1 * d2;
	SimplificarFraccion(nr,dr);
}

//################################################################################
//Procedimiento DividirFracciones: Recibe dos fracciones (numerador y denominador)
// y devuelve otra fracción que es la división de la primera y la segunda.
//La resta de dos fracciones es otra fracción cuyo `numerador=n1*d2` 
//y `denominador=d1*n2`
//Este procedimiento usa SimplificarFraccion para simplificar la fracción calculada.
//Parámetros de entrada: numerador1 y denominador1, numerador2 y denominador2
//Parámetros de entrada y salida: numerador y denominador de la fracción resultado
//################################################################################

void DividirFracciones(int n1,int d1,int n2,int d2,int &nr,int &dr)
{
	nr = n1 * d2;
	dr = d1 * n2;
	SimplificarFraccion(nr,dr);
}

//################################################################################
//Función CalcularMCD: Recibe dos números y devuelve el MCD utilizando el método 
//de Euclides. El método de Euclides es el siguiente:
// * Se divide el número mayor entre el menor.
// * Si la división es exacta, el divisor es el MCD.
// * Si la división no es exacta, dividimos el divisor entre el resto obtenido y 
//se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el MCD.
//Parámetros de entrada: dos números
//Dato devuelto: El MCD
//################################################################################

int CalcularMCD(int num1,int num2)
{
	int resto;
	//Si uno de los números es 0 se devuelve 1.
	if (num1==0 || num2==0)
		return 1;
	//Se divide el número mayor entre el menor.
	Intercambiar(num1,num2);
	resto = num1 % num2;
	if(resto == 0) //Si la división es exacta, el divisor es el MCD.
		return num2;
	else
		//Si la división no es exacta, dividimos el divisor entre el resto obtenido y 
		//se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el MCD.
		return CalcularMCD(num2,resto);
}

//################################################################################
//Procedimiento Intercambiar: Recibe dos números como parámetros de entrada y 
//salida e intercambia sus valores si el segundo es mayor que el primero.
//Parámetros de entrada y salida: dos números
//################################################################################

void Intercambiar(int &mayor,int &menor)
{
	int aux;
	if(mayor<menor)
	{
		aux=mayor;
		mayor=menor;
		menor=aux;
	}
}

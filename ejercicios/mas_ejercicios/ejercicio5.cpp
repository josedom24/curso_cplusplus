//################################################################################
//Crea un programa principal que permita convertir de decimal a binario y de 
//binario a decimal.
//################################################################################
#include <iostream>
using namespace std;
string ConvertirABinario(int decimal);
int ConvertirADecimal(string binario);
bool EsBinario(string binario);

int main(int argc, char *argv[]) {
	int decimal;
	string binario;
	cout << "Dime un número decimal:";
	cin >> decimal;
	cin.ignore();
	cout << "Número binario:" << ConvertirABinario(decimal) << endl;
	do
	{
		cout << "Dime un número en binario:";
		getline(cin,binario);
	}
	while(!EsBinario(binario));
	cout << "Número decimal:" << ConvertirADecimal(binario) << endl;
	return 0;
}

//################################################################################
//Función ConvertirABinario: Recibe un número entero y devuelve una cadena de
//caracteres con la representación binaria del número.
//Parámetros de entrada: Número entero a convertir
//Dato devuelto: Cadena de caracteres con el número binario
//################################################################################

string ConvertirABinario(int decimal)
{
	string binario="";
	//Realizo divisiones sucesivas entre 2 guardando el resto (1 o 0)
	while(decimal>1)
	{
		//Concatenamos en orden inverso los restos de la división entre 2.
		binario=to_string(decimal % 2)+binario;
		decimal = decimal / 2;
	}
	binario=to_string(decimal)+binario;
	return binario;
}

//################################################################################
//Función ConvertirADecimal: Recibe una cadena de caracteres con la representación
// de un número binario y devuelve el entero correspondiente.
//Parámetros de entrada: Cadena de caracteres con el número binario
//Dato devuelto: Entero
//################################################################################

int ConvertirADecimal(string binario)
{
	int decimal,posicion, exponente;
	decimal = 0;
	exponente=1;
	//Voy acumulando el valor de la cifra binario elevado a un exponente que depende de su posición.
	//La última cifra hay que elevar al exponete 1, la siguiente 2, la siguiente 4, y así sucesivamente.
	for(posicion=binario.size()-1;posicion>=0;posicion--)
	{
		if(binario[posicion]=='1')
			decimal+=exponente;
		
		//El exponente se va doblando en cada iteración
		exponente=exponente*2;
	}
	return decimal;
}

//################################################################################
//Función EsBinario: Recibe una cadena de caracteres con la representación
// de un número binario y devuelve un valor lógico indicando si realmente es un
//número binario (Tienes 1 y 0) verdadero, y falso en caso contrario.
//Parámetros de entrada: Cadena de caracteres con el número binario
//Dato devuelto: Valor lógico
//################################################################################

bool EsBinario(string binario)
{	
	int i;
	for(i=0;i<binario.size();i++)
	{
		if(binario[i]!='1' && binario[i]!='0')
			return false;
	}
	return true;
}


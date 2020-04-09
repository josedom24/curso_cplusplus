//################################################################################
//Realiza un programa principal que lea un DNI y valide que es correcto (se debe 
//comprobar también que tiene 9 caracteres).
//################################################################################
#include <iostream>
using namespace std;
char CalcularLetra(int num);
bool ValidarDNI(string dni);

int main(int argc, char *argv[]) {
	string midni;
	cout << "DNI:";
	getline(cin,midni);
	//Mienstras el dni sea inválido o su longitud no sea de 9 caracteres, vuelvo a pedirlo.
	while(!ValidarDNI(midni) || midni.size()!=9)
	{
		cout << "Error en el DNI" << endl;
		cout << "DNI:";
		getline(cin,midni);
	}
	cout << "DNI correcto" << endl;
}

//################################################################################
//Función ValidarDNI: Recibe un DNI cadena de caracteres (números y letra), devuelve
//si el DNI es valido o no. Para saber si el válido se utiliza la función 
//CalcularLetra con el número del DNI y se comprueba si la letra calculada coincide
//con la letra del DNI.
//Parámetros de entrada: DNI
//Dato devuelto: Valor lógico Verdadero si el DNI es válido o Falso en caso contrario.
//################################################################################

bool ValidarDNI(string dni)
{
	int num;
	char letra;
	letra=dni[8];
	num=stoi(dni.erase(8,1));  //stoi convierte un string a entero
	return toupper(letra)==CalcularLetra(num);
}

//################################################################################
//Función CalcularLetra: Recibe un número de DNI, devuelve la letra correspondiente.
//Para calcular la letra se divide el número entre 23 y el resto indica la posición
//de una lista de letras que hemos guardado en una cadena.
//Parámetros de entrada: Número de dni
//Dato devuelto: La letra calculada
//################################################################################

char CalcularLetra(int num)
{
	string letras= "TRWAGMYFPDXBNJZSQVHLCKE";
	return letras[num%23];
}

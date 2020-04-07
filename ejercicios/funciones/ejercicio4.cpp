//################################################################################
//Crea un función "ConvertirEspaciado", que reciba como parámetro un texto y 
//devuelve una cadena con un espacio adicional tras cada letra. Por ejemplo, 
//"Hola, tú" devolverá "H o l a , t ú ". Crea un programa principal donde se 
//use dicha función.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la función
string ConvertirEspaciado(string cad);	

int main(int argc, char *argv[]) {
	string mensaje;
	cout << "Introduce una cadena:";
	getline(cin,mensaje);
	cout << "La cadena con espacio: " << ConvertirEspaciado(mensaje);
	return 0;
}

//################################################################################
//Función ConvetirEspaciado: Recibe una cadena de caracteres, y devuelve otra 
//con los mismos caracteres separados con espacio.
//Parámetros de entrada: Cadena de caracteres
//Dato devuelto: Cadena igual a la anterior pero con espacios entre los 
//caracteres
//################################################################################

string ConvertirEspaciado(string cad)
{
	string cad_con_espacios="";
	int i;
	for(i=0;i<cad.size();i++)
	{
		//Concateno el carácter
		cad_con_espacios+=cad[i];
		//Concateno un espacio
		cad_con_espacios+=" ";
	}
	return cad_con_espacios;
}


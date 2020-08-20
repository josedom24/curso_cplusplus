//################################################################################
//Crea un procedimiento EscribirCentrado, que reciba como parámetro un texto y lo 
//escriba centrado en pantalla (suponiendo una anchura de 80 columnas; pista: 
//deberás escribir 40 - longitud/2 espacios antes del texto). 
//Además subraya el mensaje utilizando el carácter =.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la función
void EscribirCentrado(string cad);

int main(int argc, char *argv[]) {

	string mensaje1,mensaje2;
	mensaje1 = "Un mensaje centrado";
	EscribirCentrado(mensaje1);
	mensaje2 = "Otro mensaje";
	EscribirCentrado(mensaje2);
	return 0;
}

void EscribirCentrado(string cad)
{
	int i;
	for(i=0;i<40 - int(cad.size()) / 2;i++)
		cout << " ";
	cout << cad << endl;
	for(i=0;i<40 - cad.size() / 2;i++)
		cout << " ";
	
	for(i=0;i< cad.size() ;i++)
		cout << "=";
	cout << endl;	
	
}


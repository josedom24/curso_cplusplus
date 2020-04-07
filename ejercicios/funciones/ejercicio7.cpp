//################################################################################
//Crear una subrutina llamada "Login", que recibe un nombre de usuario y una 
//contraseña y te devuelve Verdadero si el nombre de usuario es "usuario1" y la 
//contraseña es "asdasd". Además recibe el número de intentos que se ha intentado 
//hacer login y si no se ha podido hacer login incremente este valor.
//Crear un programa principal donde se pida un nombre de usuario y una contraseña 
//y se intente hacer login, solamente tenemos tres oportunidades para intentarlo.
//################################################################################

#include <iostream>
using namespace std;
//Declaración de la función
bool Login(string nombre,string pass,int &intentos);	

int main(int argc, char *argv[]) {
	string usuario,clave;
	int cuantasveces;
	bool entrar;
	cuantasveces=0;
	do
	{
		cout << "Usuario:";
		getline(cin,usuario);
		cout << "Password:";
		getline(cin,clave);
		//Llamo a la función y le envío el nombre y la contraseña
		//Devuelve verdadero o falso según haya indicado bien los datos
		//Además incrementa la variable "cuantasveces" que es un contador de intentos
		entrar=Login(usuario,clave,cuantasveces);
		if(!entrar)
			cout << "Error. Nombre de usuario o contraseña incorrecta." << endl;
	}while(!entrar && cuantasveces<3); //Sale si he hecho login o llego a los tres intentos
	//Puedo llegar a esta instrucción por dos razones
	//Si he hecho login muestro mensaje de bienvenida
	if(entrar)
		cout << "Bienvenidos al sistema" << endl;
	else //He llegado a los tres intentos
		cout << "No has entrado en el sistema" << endl;
	return 0;
}

//################################################################################
//Función Login: Recibe un nombre de usuario y una contraseña, y devuelve un
//valor lógico: verdadero si se ha introducido el nombre y la contraseña adecuadas.
//Además va incrementa el numero de internos que la recibe como parámetro de 
//entrada/salida
//Parámetros de entrada: nombre y contraseña
//Parámetros de entrada y salida: intentos
//Dato devuelto: Valor lógico indicando si ha hecho login
//################################################################################

bool Login(string nombre,string pass,int &intentos)
{
	intentos++;
	if(nombre=="usuario1" && pass=="asdasd")
		return true;
	else
		return false;
}


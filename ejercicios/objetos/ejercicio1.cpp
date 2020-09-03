#include <iostream>
using namespace std;

class Persona
{
protected:
	string nombre;
	int edad;
	string dni;
	void validar_dni();
public:
	Persona();
	Persona(string nnombre,int nedad,string ndni);
	string get_nombre();
	int get_edad();
	string get_dni();
	void set_nombre(string nombre);
	void set_edad(int edad);
	void set_dni(string dni);
	string mostrar();
	bool esMayorDeEdad();
};

int main(int argc, char *argv[]) {
	
}

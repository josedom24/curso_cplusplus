#include <iostream>
using namespace std;

class Persona
{
private:
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
	void set_nombre(string nnombre);
	void set_edad(int nedad);
	void set_dni(string ndni);
	string mostrar();
	bool esMayorDeEdad();
};

Persona::Persona()
{
	nombre="";
	edad=0;
	dni="";
}

Persona::Persona(string nnombre,int nedad,string ndni)
{
	nombre=nnombre;
	edad=nedad;
	dni=ndni;
}

string Persona::get_nombre()
{
	return nombre;
}

int Persona::get_edad()
{
	return edad;
}

string Persona::get_dni()
{
	return dni;
}

void Persona::set_nombre(string nnombre)
{
	nombre=nnombre;
}

void Persona::set_edad(int nedad)
{
	if(nedad<0)
	{
		cout << "Edad incorrecta." << endl;
		edad=0;
	}
	else
	{
		edad = nedad;
	}
}

void Persona::set_dni(string ndni)
{
	dni=ndni;
	validar_dni();
}

void Persona::validar_dni()
{
	string letras;
	char letra;
	int num;
	letras="TRWAGMYFPDXBNJZSQVHLCKE";
	if (dni.size()!=9)
	{
		cout << "DNI incorrecto." << endl;
		dni="";
	}
	else
	{
		letra=dni[8];
		num=stoi(dni.erase(8,1));  //stoi convierte un string a entero
		if (toupper(letra) != letras[num%23])
		{
			cout << "DNI incorrecto." << endl;
			dni="";
		}
	}
}

string Persona::mostrar()
{
	return "Nombre:"+nombre+ " - Edad:"+ to_string(edad)+ " - DNI:" + dni;
}

bool Persona::esMayorDeEdad()
{
	return(edad>18);
}

int main(int argc, char *argv[]) {
	Persona yo("José Domingo",40,"12345678X");
	yo.set_dni("12345678W");
	cout << yo.mostrar()<<endl;
	if(yo.esMayorDeEdad())
		cout << "Es mayor de edad" << endl;
	//yo.validar_dni();
	return 0;
	
}

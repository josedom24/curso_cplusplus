# Tipos de datos complejos: estructuras

El lenguaje C++ nos permite declarar nuevos tipos de datos. Las estructuras nos permiten declarar nuevos tipos de datos complejos.

Una estructura es un conjunto de una o más variables, de distinto tipo, agrupadas bajo un mismo nombre para que su manejo sea más sencillo.

Para definir una estructura usamos la siguiente sintaxis (hay que hacerlo antes del programa principal):

    struct tipo_estructura
    {
    	tipo_variable nombre_variable1;
    	tipo_variable nombre_variable2;
    	tipo_variable nombre_variable3;
        ...
    };

Por ejemplo si queremos definir un nuevo tipo de datos para guardar los datos de un libro lo haríamos de la siguiente manera:

    struct libro
    {
        int id;
        string titulo;
        string autor;
    };

Posteriormente en el programa principal podemos crear nuevas variables del tipo `libro`:

    struct libro mi_libro;
    struct libro libreria[100];

Podemos inicializar la variable de tipo estructura a la hora de inicializarla:

    struct libro mi_libro2 = {1,"El Señor de los anillos","JR Tolkien"};

Para acceder a las variables que forman parte de una estructura usamos el operador `.`:

    mi_libro.id = 10;
    cout << mi_libro2.autor;

Veamos un ejemplo:

    #include <iostream>
    using namespace std;

    struct libro
    {
    	int id;
    	string titulo;
    	string autor;
    };

    int main(int argc, char *argv[]) {
    
    	struct libro mi_libro;
    	cout << "Introduce el identificador:";
    	cin >> mi_libro.id;
    	cin.ignore();
    	cout << "Introduce el título:";
    	getline(cin,mi_libro.titulo);
    	cout << "Introduce el autor:";
    	getline(cin,mi_libro.autor);
    
    
    	cout << "Identificador: "<< mi_libro.id <<endl;
    	cout << "Título: "<< mi_libro.titulo <<endl;
    	cout << "Autor: "<< mi_libro.autor <<endl;
    	return 0;
    }

    Veamos un ejemplo un poco más complejo donde vamos a declarar un array de estructuras:

    #include <iostream>
    using namespace std;
    # define ALUMNOS 20
    struct alumno
    {
    	string nombre;
    	int edad;
    };
    
    int main(int argc, char *argv[]) {
    	int i;
    	struct alumno clase[ALUMNOS];
    
    	for(i=0;i<ALUMNOS;i++)
    	{
    		cout << "Introduce el nombre del alumno " << i+1 << ":";
    		getline(cin,clase[i].nombre);
    		cout << "Introduce la edad del alumno " << i+1 << ":";
    		cin >> clase[i].edad;
    		cin.ignore();
    	}
    	cout << "ALUMNOS" << endl;
    	for(i=0;i<ALUMNOS;i++)
    	{
    		cout << clase[i].nombre << " -- " << clase[i].edad << endl;
    	}
    
    	return 0;
    }
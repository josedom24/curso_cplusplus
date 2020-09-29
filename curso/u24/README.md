# Cadenas de caracteres con la clase string

En el apartado **Introducción a las cadenas de caracteres** estuvimos estudiando varios aspectos de las cadenas en c++ usando la clase `string`:

* Declaración de las cadenas de caracteres.
* Indexación de los carácteres.
* Concatenación de cadenas con el operador `+`.
* Algunos métodos de la clase string

Vamos a profundizar en el uso de algunos métodos de clase de `string`.

## Principales métodos de la clase string

Vamos a ver los ejemplos a partir de esta cadena:

    string cadena="informática";

* `clear()`: Borra todos los caracteres de una cadena. Ejemplo:

        cadena.clear();
        cout << cadena; //No muestra nada, la cadena está vacía

* `length()` o `size()`: Devuelve la cantidad de caracteres que tiene una cadena. Ejemplo:

        cout << "La cadena " << cadena << " tiene " << cadena.length() << " caracteres.";
    La salida sería:

        La cadena informática tiene 11 caracteres.

* `front()` y `back()`: Devuelve el primer carácter y el último de una cadena. Ejemplo:

        cout << "Primer carácter: " << cadena.front() << endl; //Igual que cadena[0]
        cout << "Último carácter: " << cadena.back() << endl; // Igual que cadena[[cadena.length() - 1]]

    La salida sería:
    
        Primer carácter: i
        Último carácter: a

* `append()`: Nos permite añadir otra cadena al final de la primera. Ejemplo:

        cadena.append(" moderna"); //Es lo mismo que cadena += " moderna";
        cout << cadena;

    La salida sería:

        informática moderna

    Para añadir una variable de tipo carácter tengo que indicar el número de carácteres:

        char car='0';
        cadena.append(1,car);
        cout << cadena;

    La salida sería:

        informática moderna0

* `find()`: Busca la aparición de una subcadena dentro de una cadena. Devuelve la posición de la subcadena encontrada. Si no la encuentra devuelve -1. Ejemplo:

        if(cadena.find("i")!=-1)
		    cout << "Posición del primer carácter i: " << cadena.find("i") << endl;
	    cout << "Posición del segundo carácter i: " << cadena.find("i",1) << endl;

    La salida sería:

        Posición del primer carácter i: 0
        Posición del segundo carácter i: 8

* `substr()`: Devuelve una subcadena de una cadena. Si utilizo `substr(a,b)` obtiene una sebcadena desde el índice `a` que tiene `b` caracteres, si utilizo `substr(a)` obtengo una subcadena desde el índice `a` hasta el final. y Ejemplo:

        string subcad;
        subcad=cadena.substr(2,3);
        cout << subcad << endl;
        subcad=cadena.substr(5);
        cout << subcad << endl;

    La salida sería:

        for
        mática

* `replace()`: Reemplaza parte de una cadena por otra. Se utiliza como `replace(a, b, str)` que remplaza `b` caracteres desde el índice `a` por la cadena `str`. Ejemplo:

        cadena.replace(6,5,"ación");
        cout << cadena << endl;

    La salida sería:

        información

## Ejemplo completo

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
    	string cadena="informática";
    
    	//Borramos los caracteres de la cadena
    	cadena.clear();
    	cout << cadena; //No muestra nada
    	//Volvemos a inicializar con un valor
    	cadena="informática";
    
    	//Longitud de la cadena
    	cout << "La cadena " << cadena << " tiene " << cadena.length() << " caracteres." <<     endl;
    
    	//Primer y último carácter
    	cout << "Primer carácter: " << cadena.front() << endl; //Igual que cadena[0]
    	cout << "Último carácter: " << cadena.back() << endl; // Igual que cadena[[cadena.  length() - 1]]
    
    	//Añadir cadenas
    	cadena.append(" moderna"); //Es lo mismo que cadena += " moderna";
    	cout << cadena << endl;
    
    	//Añadimos un carácter
    	char car='0';
    	cadena.append(1,car);
    	cout << cadena << endl;
    
    	//Volvemos a inicializar con un valor
    	cadena="informática";
    
    	//Buscar caracteres
    	if(cadena.find("i")!=-1)
    		cout << "Posición del primer carácter i: " << cadena.find("i") << endl;
    	cout << "Posición del segundo  carácter i: " << cadena.find("i",1) << endl;
    
    	//Extraer subcadenas
    	string subcad;
    	subcad=cadena.substr(2,3);
    	cout << subcad << endl;
    	subcad=cadena.substr(5);
    	cout << subcad << endl;
    
    	// Reemplazar parte de la cadena
    	cadena.replace(6,5,"ación");
    	cout << cadena << endl;
    
    	return 0;
    }

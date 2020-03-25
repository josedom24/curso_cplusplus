# Uso específico de variables: contadores, acumuladores e indicadores

## Contadores

Un contador es una variable entera que la utilizamos para contar cuando ocurre un suceso. Un contador:

* Se **declara**:

        int cont;

* Se **inicializa** a un valor inicial (Por defecto una variable entera tiene el valor 0, pero no está mal inicializarla de todas formas).

		cont = 0; 

* Se **incrementa**, cuando ocurre el suceso que estamos contado se le suma 1.

		cont = cont + 1;
    
    De otra forma:

        cont++;

### Ejemplo

Introducir 5 número y contar los números pares.

    
    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
        int var,cont,num;
        cont=0;
        for(var=1;var<=5;var++)
        {
            cout << "Dime un número:";
            cin >> num;
            if(num % 2 == 0)
                cont=cont+1;
        }
        cout << "Has introducido " << cont << " números pares.";
        return 0;
    }

## Acumuladores

Un acumulador es una variable numérica que permite ir acumulando operaciones. Me permite ir haciendo operaciones parciales. Un acumulador:

* Se **declara** como una variable entera.
* Se **inicializa** a un valor inicial según la operación que se va a acumular: a 0 si es una suma o a 1 si es un producto.
* Se **acumula** un valor intermedio.
		
		acum = acum + num;

### Ejemplo

Introducir 5 número y sumar los números pares.

	#include <iostream>
	using namespace std;

	int main(int argc, char *argv[]) {
		int var,suma,num;
		suma=0;
		for(var=1;var<=5;var++)
		{
			cout << "Dime un número:";
			cin >> num;
			if(num % 2 == 0)
				suma=suma+num;
		}
		cout << "La suma de los números pares es " << suma;
		return 0;
	}

## Indicadores

Un indicador es una variable lógico, que usamos para recordar o indicar algún suceso. Un indicador:

* Se **declara** como una variable lógica:

        bool indicador;

* Se **inicializa** a un valor lógico que indica que el suceso no ha ocurrido.

	    indicador = false;

* Cuando ocurre el suceso que queremos recordar cambiamos su valor.

	    indicador = true;

### Ejemplo

Introducir 5 número e indicar si se ha introducido algún número par.

	#include <iostream>
	using namespace std;

	int main(int argc, char *argv[]) {
		int var,num;
		bool indicador;
		indicador = false;
		for(var=1;var<=5;var++)
		{
			cout << "Dime un número:";
			cin >> num;
			if(num % 2 == 0)
				indicador = true;
		}
		if(indicador)
			cout << "Has introducido algún número par";
		else
			cout << "No has introducido algún número par";
		return 0;
	}

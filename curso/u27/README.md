# Arrays unidimensionales: Vectores

Un **vector** es una array unidimensional. Para declarar un vector de 10 enteros:

	int vector[10];

Podemos inicializar el vector a declararlo:

	int vector[10]={1,2,3,4,5,6,7,8,9,10};

Para acceder a cada uno de los elementos del vector utilizamos un índice. el primer elemento se accede con el índice 0. Podemos trabajar individualmente con cada uno de los elementos:

	vector[0]=10;
	cout << vector[0];

**CUIDADO:** El acceso a un elemento que no existe **no** producirá un error, por ejemplo:

	vector[10]=10;

## Recorrido de un vector

Vamos a inicializar todos los elementos de un vector. Para ello vamos a **recorrer** el vector e inicializar cada elemento con un valor ,por ejemplo lo vamos a inicializar a 0. Para recorrer un vector utilizamos un bucle `for`:

	for(i=0;i<10;i++)
		array[i]=0;

Podríamos recorrer el vector para mostrar el valor de los elementos:

	for(i=0;i<10;i++)
		cout << array[i];

### Ejemplo

Inicializar un vector de 5 cadenas a partir de los datos pedidos por teclado y posterior mostrarlos en pantalla y mostrar su longitud.

    #include <iostream>
    using namespace std;

    int main(int argc, char *argv[]) {
	    string vector[5];
        int i;
		
		for(i=0;i<5;i++)
		{
			cout << "Dime la cadena número "<< i+1<< ":";
			cin >> vector[i];
		}
		cout << "Las cadenas y sus longitudes" << endl;
		for(i=0;i<5;i++)
		{
			cout << vector[i] << ": " << vector[i].size() << endl;
		}
        return 0;
	}
	

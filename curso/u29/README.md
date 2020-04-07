# Arrays multidimensionales: Tablas

Una **tabla** en un array bidimensional. La primera dimensión indica el número de filas y el segundo el número de columnas.

	int tabla[3][4];

Hemos definido una tabla de enteras con 3 filas y 4 columnas, por tanto tenemos 12 elementos.

Para acceder a cada uno de lo elemento tenemos que indicar la fila y la columna en la que se encuentra, siempre empezando por el 0. Por ejemplo para inicializar el elemento que esta en la primera fila y la segunda columna sería:

	tabla[0][1] = 10;

El acceso a un elemento que no existe no producirá un error.

## Recorrido de una tabla

Para recorrer todos los elementos de una tabla necesitamos utilizar dos bucles anidados. Normalmente el exterior nos va a permitir recorrer las filas y el interior las columnas. Por ejemplo para inicializar todos los elementos a 0, quedaría:

	for(filas=0;filas<3;filas++)
    {
		for(columnas=0;columnas<4;columnas++)
        {
			tabla[filas][columnas]=0;
        }
    }

De forma similar podríamos recorrer la tabla para mostrar los elementos:

	for(filas=0;filas<3;filas++)
    {
		for(columnas=0;columnas<4;columnas++)
        {
			cout << tabla[filas][columnas];
        }
    }

### Ejemplo

Inicializar una tabla con los números del 1 al 5, sus cuadrados y sus cubos. Por lo tanto tenemos que definir una tabla con 5 filas y 3 columnas. Muestra los datos:

    #include <iostream>
    #include <cmath>
    using namespace std;

    int main(int argc, char *argv[]) {
		int tabla[5][3];
        int filas,columnas;
		for(filas=0;filas<5;filas++)
        {
			tabla[filas][0]=filas+1;
			tabla[filas][1]=pow(filas+1,2);
			tabla[filas][2]=pow(filas+1,3);
		}
		
        for(filas=0;filas<5;filas++)
        {
		    for(columnas=0;columnas<3;columnas++)
            {
				cout << tabla[filas][columnas] << " ";
			}
			cout << endl;
		}
	    return 0;
    }

## Arrays multidimensionales

Los arrays pueden tener las dimensiones que deseemos, por ejemplo podemos tener una array de tres dimensiones:

	int tabla[4][4][4];

Y podríamos inicializar el primer elemento como:

	tabla[0][0][0]=10;

Necesitaríamos tres bucles para recorrer un array de tres dimensiones:

	for(i=0;i<4;i++)
    {
		for(j=0;j<4;j++)
        {
			for(k=0;k<4;k++)
            {
				tabla[i][j][k]=0;
			}
		}
	}


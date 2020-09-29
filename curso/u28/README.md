# Cadenas de caracteres estilo C

La cadena de caracteres de estilo C se originó en el lenguaje C y continúa siendo compatible con C++.

En C las cadenas de caracteres son en realidad un vector (array) de elementos del tipo carácter. La característica principal de este vector es que usamos un carácter especial llamado nulo (`\0`) para indicar el final de la cadena.

La siguiente declaración e inicialización crean una cadena que consiste en la palabra "Hola".

    char cadena[6] = {'H', 'o', 'l', 'a', '\0'};

Otra forma de inicializarlo sería:

    char cadena[]="Hola";

En ambas declaraciones, la índice 4 será igual a `\0`:

    cout << cadena[4];

## Librería cstring

En la librería `cstring` tenemos definidas varias funciones para trabajar con las cadenas de caracteres de estilo C:

* `strcpy(cad1, cad2)`: Copia la cadena cad2 en la cadena cad1.
* `strcat(cad1, cad2)`: Concatena la cadena cad2 con la cadena cad1.
* `strlen(cad1)`: Devuelve el tamaño de la cadena cad1;
* `strcmp(cad1, cad2)`: compara cadenas. Devuelve 0 si cad1 y cad2 son iguales; un número menor que 0 si `cad1<cad2`; un número mayor que 0 si `cad1>cad2`.

Veamos un ejemplo:

    #include <iostream>
    #include <cstring>

    using namespace std;

    int main () {

       char str1[10] = "Hola";
       char str2[10] = "Mundo";
       char str3[10];
       int  len;

       // Copia str1 en str3
       strcpy( str3, str1);
       cout << "strcpy( str3, str1) : " << str3 << endl;

       // Concatena str1 y str2
       strcat( str1, str2);
       cout << "strcat( str1, str2): " << str1 << endl;

       // Longitud de str1 después de concatenar
       len = strlen(str1);
       cout << "strlen(str1) : " << len << endl;

       return 0;
    }
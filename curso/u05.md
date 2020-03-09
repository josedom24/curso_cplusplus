# Estructura de un programa en C++

Veamos nuestro primer programa para estudiar su estructura:

    #include <iostream>
    using namespace std;

    /* funcion main() 
    Es la función donde empieza la ejecución */
    
    int main() {
       cout << "Hola Mundo!!!"; // Imprime Hola Mundo
       return 0;
    }

Veamos algunas elementos que forman parte de la estructura de un programa c++:

* `#include <iostream>` con esta instrucción indicamos que vamos a utilizar la librería `iostream`. En esta librería están definida las funciones de entrada/salida, por ejemplo `cout`.
* `using namespace std;`: Para que usemos el espacio de nombres estándar (`std`). Como podemos tener diferentes elementos en el lenguaje que se llamen igual se utiliza espacios de nombres para agruparlas. El espacio de nombres de las funciones de entrada / salida como `cout` o `cin` están definidos en el el espacio de nombres `std`, por lo tanto, si indicamos que vamos a usarlos no será necesario nombrarlo cuando escribamos las instrucciones.  Si no indicamos que vamos a usar el espacio de nombres `std` la instrucción que escribe en pantalla quedaría de la siguiente forma:

        std::cout << "Hola Mundo!!!"; 
    
* `int main()`: Es la función principal del programa. Al ejecutar el programa son las instrucciones de esta función las que se empiezan a ejecutar. La función principal devuelve un valor entero (`int`) al sistema operativo. Si el programa va a tener parámetros en la línea de comandos, nos podemos encontrar esta función definida de esta manera:

        int main(int argc, char *argv[])

* `cout << "Hola Mundo!!!";`: Instrucción que imprime en pantalla.
* `return 0;`: Como hemos dicho anteriormente la función `main()` devuelve un valor entero (0 si todo ha salido bien, distinto de 0 si se ha producido algún error). Esta instrucción devuelve el valor 0.
* Los bloques de instrucciones se guardan entre los caracteres `{` y `}`.
* Todas las instrucciones deben acabar en `;`.
* En C++ podemos poner comentarios de una línea (utilizando los caracteres `//`) o comentarios de varias líneas (con los carácteres `/*` y `*/`). Todos los comentarios son ignorados por el compilador.

//################################################################################
//Realizar un ejemplo de menú, donde podemos escoger las distintas opciones hasta 
//que seleccionamos la opción de "Salir".
//################################################################################
//Análisis
//La realización del menú la hacemos con un bucle repetir y una alternativa "según"
//En el bucle se realiza las siguientes acciones:
// * Mostrar el menú con las distintas opciones
// * Leer opción
// * Según opción ejecutamos las instrucciones necesarias.
// * En otro caso (opción incorrecta): Mostramos opción incorrecta
// La opción de "salir" la podemos dejar vacía (no ejecutar ninguna instrucción).
// Se repetir el bucle hasta que elijamos la opción de salir.
// Datos de entrada: opción
// Información de salida: Según la opción escogida
// Variables: opcion(entero)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int opcion;
    do {
        // mostrar menu
        cout << "Menú de recomendaciones" << endl;
        cout << "   1. Literatura" << endl;
        cout << "   2. Cine" << endl;
        cout << "   3. Música" << endl;
        cout << "   4. Videojuegos" << endl;
        cout << "   5. Salir" << endl;
        // ingresar una opcion
        cout << "Elija una opción (1-5): " << endl;
        cin >> opcion;
        // procesar esa opción
        switch(opcion)
        {
            case 1:
                cout << "Lecturas recomendables:" << endl;
                cout << " + Esperándolo a Tito y otros cuentos de fúbol (Eduardo Sacheri)" << endl;
                cout << " + El juego de Ender (Orson Scott Card)" << endl;
                cout << " + El sueño de los héroes (Adolfo Bioy Casares)" << endl;
                break;
            case 2:
                cout << "Películas recomendables:" << endl;
                cout << " + Matrix (1999)" << endl;
                cout << " + El último samuray (2003)" << endl;
                cout << " + Cars (2006)" << endl;
                break;
            case 3:
                cout << "Discos recomendables:" << endl;
                cout << " + Despedazado por mil partes (La Renga, 1996)" << endl;
                cout << " + Búfalo (La Mississippi, 2008)" << endl;
                cout << " + Gaia (Mägo de Oz, 2003)" << endl;
                break;
            case 4:
                cout << "Videojuegos clásicos recomendables" << endl;
                cout << " + Día del tentáculo (LucasArts, 1993)" << endl;
                cout << " + Terminal Velocity (Terminal Reality/3D Realms, 1995)" << endl;
                cout << " + Death Rally (Remedy/Apogee, 1996)" << endl;
                break;
            case 5:
                cout << "Gracias, vuelva prontos" << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
        }
        
	}
    while(opcion!=5);
    return 0;
}

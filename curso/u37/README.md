# Funciones recursivas

Una función recursiva es aquella que al ejecutarse hace llamadas a ella misma. Por lo tanto tenemos que tener "un caso base" que hace terminar el bucle de llamadas. Veamos un ejemplo:

    #include <iostream>
    using namespace std;
    int CalcularFactorial(int num);
    
    int main(int argc, char *argv[]) {
    	cout << "El factorial de 6 es " << CalcularFactorial(6) << endl;
    	return 0;
    }
    
    int CalcularFactorial(int num)
    {
    	if (num==0 || num==1)
    	{
    		return 1;
    	}
    	return num * CalcularFactorial(num - 1);
    }

//################################################################################
//Realizar una aplicación que recoja por teclado la cantidad total a pagar y la 
//cantidad que se ha entregado. La aplicación debe calcular el cambio 
//correspondiente con el menor número de monedas y/o billetes posibles.
//################################################################################
#include <iostream>
using namespace std;
float CalcularVuelta(float &dinero,float cantidad);
void EscribirVuelta(float vuelta,float cantidad);

int main(int argc, char *argv[]) {
	float dinero,total,entregada;
	int vuelta,indice;
	float cantidades[15]={500,200,100,50,20,10,5,2,1,0.50,0.20,0.10,0.05,0.02,0.01};
	//Calculamos el dinero a devolver
	cout << "Dinero a pagar:";
	cin >> total;
	cout << "Dinero pagado:";
	cin >> entregada;
	dinero=entregada-total;
	
	//Por cada cantidad, calculamos la vuelta e imprimimos lo que hay que devolver
	for(indice=0;indice<15;indice++)
	{
		vuelta=CalcularVuelta(dinero,cantidades[indice]);
		EscribirVuelta(vuelta,cantidades[indice]);
	}
	return 0;
}
//################################################################################
//Función CalcularVuelta: Recibe el dinero que hay que devolver y el valor de un 
//billete o una moneda, devuelve el número de billetes o monedas de esa cantidad
//que hay que devolver y actualiza el dinero que queda por devolver.
//Parámetros de entrada: cantidad: valor del billete o la moneda
//Parámetros de entrada y salida : dinero que hay que devolver, se devuelve con el 
//dinero que queda por devolver.
//Dato devuelto: vuelta: Número de billetes o monedas que hay que devolver.
//################################################################################

float CalcularVuelta(float &dinero,float cantidad)
{
	float vuelta;
	//Realizamos la división entera entre el dinero 
	//que hay que devolver y la cantidad del billete o moneda
	vuelta=int(dinero/cantidad);
	//Actualizamos el dinero que queda por devolver
	dinero=dinero - vuelta*cantidad;
	return vuelta;
}

//################################################################################
//Procedimiento EscribirVuelta: Recibe la cantidad de billetes o monedas y su valor
//y los imprime por pantalla. Se imprime si hay que devolver de ese billete o moneda
//es decir, si la vuelta>0. Si la cantidad>2 se devuelven billetes (euros), 
//sino se devuelven monedas y si la cantidad es >=1 se devuelven euros, sino céntimos.
//Parámetros de entrada: vuelta: cantidad de billetes o monedas a devolver y
//cantidad: valor del billete o moneda
//################################################################################

void EscribirVuelta(float vuelta,float cantidad)
{
	//Se imprime si hay algo que devolver
	if(vuelta>0)
	{
		//Si la cantidad es menor de 2 devolvemos billetes
		if(cantidad>2)
		{
			cout << vuelta <<  " billetes de " << cantidad << " euros." <<endl ;
		}
		else
		{
			//SiNo devolvemos monedas
			//Si la cantidad>=1 devolvemos euros
			if(cantidad>=1)
			{
				cout << vuelta <<  " monedas de " << cantidad << " euros." << endl;
			}
			else
			{
				//Devolvemos céntimos (lo multiplicamos por 100)
				cout << vuelta <<  " monedas de " << cantidad*100 << " céntimos." << endl;	
			}
		}
	}
}



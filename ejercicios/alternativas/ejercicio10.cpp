//################################################################################
//Algoritmo que pida los puntos centrales x1,y1,x2,y2 y los radios r1,r2 de dos 
//circunferencias y las clasifique en uno de estos estados:
//exteriores
//tangentes exteriores
//secantes
//tangentes interiores
//interiores
//concéntricas
//################################################################################
// Análisis
// Pedimos el centro (x1,y1) de una circunferencia y su radio r1, pedimos el 
//centro de otra circunferencia (x2,y2) y su radio r2.
//En la siguiente página podemos aprender la relación entre dos circunferencias.
//http://mimosa.pntic.mec.es/clobo/geoweb/circun3.htm
// Datos de entrada: x1,y1,x3,y2,r1,r2 (real)
// Información de salida: Tipo de relación entre las circunferencias
// Variables: x1,y1,x3,y2,r1,r2 (real), distancia (real)
//################################################################################
// Diseño
// 1.Leer x1,y1,r1
// 2.Leer x2,y2,r2
// 3. Calcular distancia entre los centros
// 4. Si distancia>suma de los radios mostrar "Circunferencias exteriores"
// 5. Si distancia = suma de los radios mostrar "Tangentes exteriores"
// 6. Si distancia < suma de los radios Y distancia> que el valor absoluto de la 
//resta de los radios mostrar "Circunferencias secante"
// 7. Si distancia = que el valor absoluto de la resta de los radios mostrar 
//"Circunferencias tangentes interiores"
// 8. Si distancia >0 y distancia < que el valor absoluto de la resta de los 
//radios mostrar "Circunferencias interiores"
// 9. Si distancia = 0  mostrar "Circunferencias concéntricas"
//################################################################################
#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float x1,y1,x2,y2,r1,r2;
	float distancia;
	cout << "Dime coordenada x primera circunferencia:" << endl;
	cin >> x1;
	cout << "Dime coordenada y primera circunferencia:" << endl;
	cin >> y1;
	cout << "Dime radio primera circunferencia:" << endl;
	cin >> r1;
	cout << "Dime coordenada x segunda circunferencia:" << endl;
	cin >> x2;
	cout << "Dime coordenada y segunda circunferencia:" << endl;
	cin >> y2;
	cout << "Dime radio segunda circunferencia:" << endl;
	cin >> r2;

	distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	// circunferencias exteriores
	//La distancia entre los centros, d, es mayor que la suma de los radios.
	if(distancia> (r1 + r2)) {
		cout << "Circunferencias exteriores";
	}
	// circunferencias tangentes exteriores
	//La distancia entre los centros es igual a la suma de los radios.
	if(distancia == (r1 + r2)) {
		cout << "Circunferencias tangentes exteriores";
	}
	// circunferencias secantes
	//La distancia  es menor que la suma de los radios y mayor que su diferencia.
	if(distancia < (r1 + r2) && distancia > abs(r1-r2)) {
		cout << "Circunferencias secantes";
	}
	// Circunferencias tangentes interiores
	//La distancia entre los centros es igual a la diferencia entre los radios.
	if(distancia == abs(r1-r2)) {
		cout << "Circunferencias tangentes interiores";
	}
	// Circunferencias interiores
	//La distancia entre los centros es mayor que cero y menor que la diferencia entre los radios. 
	if(distancia>0 && distancia<abs(r1-r2)) {
		cout << "Circunferencias interiores";
	}
	// Circunferencias concétricas
	// La distancia = 0.
	if(distancia==0) {
		cout << "Circunferencias concétricas";
	}
}

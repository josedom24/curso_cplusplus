
#include <iostream>
#include <string>
#include <utility>
#include <map>
#include <iomanip>

using namespace std;

/*----------------------------------------*/
typedef pair<string, double> venta_dia;

int main()
{
	cout << "\nUna simple prueba de map\n";
	cout << "........................\n";
	map<string, double> semana;
	
	semana.insert( venta_dia("lunes", 300.65) );
	semana.insert( venta_dia("martes", 456.12) );
	semana.insert( venta_dia("miercoles", 234.56) );
	double total = 0;
	
	map<string, double>::iterator p = semana.begin();
	while (p != semana.end() )
	{
		cout << setw(10) << p->first << setw(12) << p->second << endl;
		total += p->second;
		p ++;
	}
	
	cout << "........................\n";
	cout << setw(10) << "total:" << setw(12) << total << endl;

	return 0;
}

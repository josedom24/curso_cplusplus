#include <iostream>// Demostracion del uso de iteradores
// probado en: Dev-C++ 4.9.9.2

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<char> v;
	
	for (char x = 'A'; x <= 'Z'; x++)
		v.push_back(x);

	// obtenemos un iterator del tipo char
	vector<char>::iterator it;
	
	// lectura y despliegue de datos
	cout << "\ndesplegando datos" << endl;
	for( it = v.begin(); it != v.end(); it++ )
		cout << *it << endl;
	
	return EXIT_SUCCESS;
}

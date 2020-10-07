// Demostracion del uso del método at()
// probado en: Dev-C++ 4.9.9.2

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<char> v;
	
	// llenamos el vector v con valores desde la 'A' hasta la 'Z'
	for (int x = 'A'; x <= 'Z'; x++) v.push_back(x);
	
	// despliegue de los elementos del vector v
	// mediante el operador [].
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	
	// despliegue de los elementos del vector v
	// mediante el método at().
	for(int i = 0; i < v.size(); i++)
		cout << v.at(i) << " ";
	
	cout << endl;	
	
	cin.get();
	return EXIT_SUCCESS;
}

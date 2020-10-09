# Encapsulamiento en la programación orientada a objetos

En la unidad anterior terminamos viendo que teníamos la posibilidad de cambiar los valores de los atributos de un objeto. En muchas ocasiones es necesario que esta modificación no se haga directamente, sino que tengamos utilizar un método para realizar la modificación y poder controlar esa operación. También puede ser deseable que la devolución del valor de los atributos se haga utilizando un método. La característica de no acceder o modificar  los valores de los atributos directamente y utilizar métodos para ello lo llamamos **encapsulamiento**.

## Miembros privados

Tanto los atributos como los métodos pueden ser públicos o privados. En el caso de los atributos para conseguir el encapsulamiento lo definimos como privados y nos se podrán acceder o modificar a sus valores directamente, tendremos que usar métodos para modificar sus valores o para obtener sus valores. De esta manera tendremos el control del valor que pueden tomar los atributos.

Del mismo modo podemos tener métodos privados. Si un método es privado no se podrá usar directamente desde el objeto pero si podrá ser usado desde otro método de la clase.

Veamos el ejemplo de la clase `Punto` con los atributos privados y métodos de lectura y escritura para cada atributo. Además vamos asegurarnos que nuestros puntos están en el primer cuadrante, es decir el valor de la x y de la y deben ser positivo:

    #include <iostream>
    #include <cmath>
    using namespace std;
    
    class Punto
    {
    	//Atributos
    
    	float x;
    	float y;
    public:	
    	//Métodos
    	Punto();
    	Punto(float nx, float ny);
    	void mostrar();
    	float distancia(Punto otro);
    	void set_x(float nx);
    	float get_x();
    	void set_y(float nx);
    	float get_y();
    };	
    
    Punto::Punto()
    {
    	x=0;
    	y=0;
    }
    Punto::Punto(float nx, float ny)
    {
    	x=nx;
    	y=ny;
    }
    void Punto::mostrar()
    {
    	cout << x << "-" << y;
    }
    float Punto::distancia(Punto otro)
    {
    	float dx, dy;
    	dx = x - otro.x;
    	dy = y - otro.y;
    	return sqrt(dx*dx + dy*dy);
    }
    
    
    void Punto::set_x(float nx)
    {
    	if (nx>=0)
    		x=nx;
    	else
    		x=0;
    }
    
    float Punto::get_x()
    {
    	return x;
    }
    
    void Punto::set_y(float ny)
    {
    	if (ny>=0)
    		y=ny;
    	else
    		y=0;
    }
    
    float Punto::get_y()
    {
    	return y;
    }
    
    int main(int argc, char *argv[]) {
    
    	Punto punto1;
    	Punto punto2(4,5);
    
    	//Estas instrucciones darían un error de compilación
    	//punto1.x=6;
    	//cout << punto1.x;
    
    	punto1.set_x(6);
    	cout << punto1.get_x() << endl;
    
    	punto1.mostrar();
    	cout << endl;
    	punto2.mostrar();
    	cout << endl;
    	cout << punto1.distancia(punto2);
    
    	return 0;
    }



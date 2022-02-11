

int x; // define variable del tipo fundamental 'int'



double d; // define variable del tipo fundamental 'double'




void fcn(int) {}; // define una función del tipo void()(int)
int* ptr; // define variable del tipo compuesto 'puntero a int'
int& ref; // define variable del tipo compuesto 'referencia a int'
int arr[5]; // define un array de 5 integers de tipo int[5] 







#include <iostream>

//using longitud = int; // define un tipo alias con identificador 'longitud'

int main()
{
	longitud x{ 5 }; // podemos usar 'longitud' aquí porque lo definimos arriba
	std::cout << x;

	return 0;
}


// Define un tipo-de-usuario llamado Quebrado de modo que
// el compilador entienda lo que es un Quebrado
// Aquí sólo definimos lo que es un Quebrado, no lo creamos
struct Quebrado
{
	int numerador{};
	int denominador{};
};

// Ahora ya podemos usar nuestro tipo Quebrado
int main()
{
	Quebrado q{ 3, 4 }; // esto realmente instancia un objeto Quebrado de nombre q

	Quebrado quebrado{};

	return 0;
}







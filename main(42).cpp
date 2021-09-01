#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Amazon.h"
using namespace std;

int main() 
{

	cout << "Welcome to Amazon!" << endl << endl;
	Producto p = Producto();
	//cout << p << endl;

	Carrito c = Carrito();
	//cout << c << endl;

	c.agregarProducto(p);
	cout << c << endl;

	Inventario i = Inventario();

  return 0;
}
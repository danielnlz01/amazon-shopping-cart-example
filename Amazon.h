using namespace std;

class Producto
{
	private:
		string productName;
		double stars, maxPrice;

	protected:
		//métodos solo para herencia

	public:
		Producto(string productName = "", double stars = 0.0, double maxPrice = 0.0)
		{
			this->productName = productName;
			this->stars = stars;
			this->maxPrice = maxPrice;
		}

		friend ostream& operator<<(ostream& salida, const Producto & producto);
};

ostream& operator<<(ostream& salida, const Producto & producto)
{
	salida << endl << "--------------------------------------------------------------------" << endl << "Nombre del producto: " << producto.productName << endl << "Estrellas: " << producto.stars << endl << "Precio máximo: " << producto.maxPrice;
	return salida;
}

/*
int  a = 10; // var normal
int *aptr // apuntador = &a;
&a // referencia
*/

class Carrito
{
	private:
		vector<Producto> productos;

	protected:

	public:
		Carrito()
		{
			productos = vector<Producto>();
		}

		void agregarProducto(Producto & producto)
		{
			productos.push_back(producto);
		}

		friend ostream& operator<<(ostream& salida, const Carrito & carrito)
		{
			if (carrito.productos.size() == 0)
	{
		salida << endl << "--------------------------------------------------------------------" << endl << "Carrito vacío!";
	}
	for (int i = 0; i < carrito.productos.size(); i++)
	{
		salida << endl << "Carrito de compras: " << endl << "--------------------------------------------------------------------" << endl << "Producto #" << i  << " :" << carrito.productos[i] << endl;
	}
	return salida;
		}
};

ostream& operator<<(ostream& salida, const Carrito & carrito)
{
	
}

class Inventario
{
	private:
		void cargaDatos()
		{
			ifstream archivo("mx-books.csv");
			string id, time, rank, productName, stars, reviews, author, edition, price, maxPrices;

			string linea;

			getline(archivo, linea);

			cout << linea;

			/*while (getline(archivo, linea))
			{
				//cout << linea << endl; //parsing
				istringstream parser(linea);

				
				getline(parser, id, "|");
				getline(parser, time, "|");
				getline(parser, rank, "|");
				getline(parser, productName, "|");
				getline(parser, stars, "|");
				getline(parser, reviews, "|");
				getline(parser, author, "|");
				getline(parser, edition, "|");
				getline(parser, price, "|");
				getline(parser, maxPrices, "|");
			

				cout << id << endl;	*/
			}
		}

	protected:

	public:
		vector<Producto> productos;
		Inventario()
		{
			productos = vector<Producto>();
			cargaDatos();
		}
		void agregarProducto(Producto & producto)
		{
			productos.push_back(producto);
		}
};
#include <iostream>
#include <vector>

class GestorColeccion {
	int* datos_ = nullptr;
public:
	GestorColeccion(std::size_t n) :
		datos_{ new int[n] }
	{}
	GestorColeccion() { delete[] datos_; }
};

int main() {
	GestorColeccion col1(10);
	GestorColeccion col2(30);
}
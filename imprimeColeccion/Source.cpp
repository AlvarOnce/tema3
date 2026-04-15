#include <iostream>
#include <vector>

class ImprimeColeccion {
	const int* datos_ = nullptr;
public:
	ImprimeColeccion(const int* datos_out) :
		datos_{ datos_out }
	{}
};

int main() {
	int coleccion[] = { 1,2,3,4,5 };
	
	ImprimeColeccion imp(coleccion);
}
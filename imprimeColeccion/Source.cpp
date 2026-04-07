#include <iostream>
#include <vector>

class ImprimeColeccion {
	int* datos_ = nullptr;
public:
	ImprimeColeccion(int* datos_out) :
		datos_{ datos_out }
	{}
};

int main() {
	int coleccion[] = { 1,2,3,4,5 };
	
	ImprimeColeccion imp(coleccion);
}
#include <iostream>
#include <string>
#include <vector>

class Esfera {
public:
	Esfera() {
		std::cout << "Esfera creada" << std::endl;
	}
};

class Cuadrado {
public:
	Cuadrado() {
		std::cout << "Cuadrado creado" << std::endl;
	}

	~Cuadrado() {
		std::cout << "Cuadrado destuido" << std::endl;
	}
};
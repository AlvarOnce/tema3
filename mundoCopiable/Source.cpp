#include <iostream>
#include <string>
#include <vector>

struct coord_t {
	double x_ = 0.0;
	double y_ = 0.0;
	double z_ = 0.0;
};

class Esfera {
	double radio_ = 0.0;
	coord_t centro_;
public:
	Esfera(double radio, const coord_t& centro) :
		radio_(radio),
		centro_(centro)
	{
	}
};

class Mundo {
	Esfera esfera_;
public:
	Mundo(const Esfera& esfera) :
		esfera_(esfera)
	{
	}
	Mundo(const Mundo& other) :
		esfera_(other.esfera_)
	{
	}
};

int main() {
	Esfera esfera(1.0, { 0.0, 0.0, 0.0 });
	Mundo mundo1(esfera);
	Mundo mundo2(mundo1);

	return 0;
}
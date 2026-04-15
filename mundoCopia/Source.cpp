#include <iostream>
#include <string>
#include <vector>

class Compex {
	double re_;
	double im_;
};

int main() {
	Compex* ptr = new Compex[10]{};

	delete[] ptr;
	return 0;
}
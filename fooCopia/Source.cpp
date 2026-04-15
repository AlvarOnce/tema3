#include <iostream>

class Foo {
public:
	Foo() = default;
	Foo(const Foo&) { std::cout << "llamada al CCopia \n"; }
};

int foofunc(Foo f) { return 0; }

void main() {
	Foo f1;
	foofunc(f1);
}
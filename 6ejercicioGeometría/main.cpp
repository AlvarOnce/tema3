#include <iostream>

using namespace std;

const double PI = 3.14159265359;

// --- CLASES DE FIGURAS ---

class Circulo {

    double radio_;

public:
    // formato de constructor con lista de inicialización 
    Circulo(double r) : radio_{ r } {}

	// hay que poner const porque el método area() no modifica el estado del objeto Circulo,
	// y así se puede llamar desde el constructor de Geom, que recibe un Circulo como referencia constante.
    double area() const {
        return PI * radio_ * radio_;
    }
};

class Triangulo {

    double base_;
    double altura_;

public:
    Triangulo(double b, double a) : base_{ b }, altura_{ a } {}

    double area() const {
        return (base_ * altura_) / 2.0;
    }
};

class Cuadrado {

    double lado_;

public:
    Cuadrado(double l) : lado_{ l } {}

    double area() const {
        return lado_ * lado_;
    }
};


// --- CLASE GEOM ---

class Geom {

    double area_calculada_;

public:
    // para garantizar que Geom "no debe poder modificar el estado de los objetos que recibe",
    // pasamos los objetos como referencias constantes (const Tipo&). 
    // al ser constantes, en el cuerpo del constructor solo podemos llamar a 
    // funciones miembro declaradas como const (el método area()).

    Geom(const Circulo& c) : area_calculada_{ c.area() } {}
    Geom(const Triangulo& t) : area_calculada_{ t.area() } {}
    Geom(const Cuadrado& c) : area_calculada_{ c.area() } {}

    double area() const {
        return area_calculada_;
    }
};


// --- TEST UNITARIO ---

int main() {
    Circulo ci(10.5); // radio
    Geom g1(ci);
    cout << "el area es: " << g1.area() << endl;

    Triangulo tr(10.0, 10.0); // base y altura
    Geom g2(tr);
    cout << "el area es: " << g2.area() << endl;

    Cuadrado cu(5.0); // lado
    Geom g3(cu);
    cout << "el area es: " << g3.area() << endl;

    return 0;
}
#include <iostream>
#include "Trapeze.h"

Trapeze::Trapeze() : Trapeze(0, 0 , 0) {
	std::cout << "Default trapeze created: " << 0 << ' ' << 0 << ' ' << 0 << std::endl;
}

Trapeze::Trapeze(double a, double b , double h)
{
	height = h;
	side_a = a;
	side_b = b;
	std::cout << "Trapeze created: " << side_a << ' ' << side_b << ' ' << height << std::endl;
}

Trapeze::Trapeze(std::istream& in)
{
	std::cout << "Enter trapeze sides and height:\n";
	in >> side_a;
	in >> side_b;
	in >> height;
}

Trapeze::Trapeze(const Trapeze& trapeze_1) {
	std::cout << "Trapeze copy created" << std::endl;
	side_a = trapeze_1.side_a;
	side_b = trapeze_1.side_b;
	height = trapeze_1.height;
}

double Trapeze::Square()
{
	return ((side_a + side_b) / 2 * height);
}

void Trapeze::Print()
{
	std::cout << "Trapeze: a= " << side_a << "  b=" << side_b << " height= " << height << std::endl;
}

Trapeze::~Trapeze()
{
	std::cout << "Trapeze deleted" << std::endl;
}
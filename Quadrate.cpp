#include <iostream>
#include "Quadrate.h"

Quadrate::Quadrate() : Quadrate(0) {
	std::cout << "Default quadrate created: " << 0 << std::endl;
}

Quadrate::Quadrate(double a)
{
	side_a = a;
	std::cout << "Quadrate created: a=" << side_a << std::endl;
}

Quadrate::Quadrate(std::istream& in)
{
	std::cout << "Enter quadrate side:\n";
	in >> side_a;
}

Quadrate::Quadrate(const Quadrate& quadrate_1) {
	std::cout << "Quadrate copy created" << std::endl;
	side_a = quadrate_1.side_a;
}

double Quadrate::Square()
{
	return (side_a * side_a);
}

void Quadrate::Print()
{
	std::cout << "Quadrate: a= " << side_a  << std::endl;
}

Quadrate::~Quadrate()
{
	std::cout << "Quadrate deleted" << std::endl;
}
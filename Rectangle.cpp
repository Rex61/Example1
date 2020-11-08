#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(0, 0) {
	std::cout << "Default quadrate created: " << 0 << ' ' << 0 << std::endl;
}

Rectangle::Rectangle(double a, double b)
{
	side_a = a;
	side_b = b;
	std::cout << "Rectangle created: " << side_a << ' ' << side_b << std::endl;
}

Rectangle::Rectangle(std::istream& in)
{
	std::cout << "Enter rectangle sides:\n";
	in >> side_a;
	in >> side_b;
}

Rectangle::Rectangle(const Rectangle& quadrate_1) {
	std::cout << "Rectangle copy created" << std::endl;
	side_a = quadrate_1.side_a;
	side_b = quadrate_1.side_b;
}

double Rectangle::Square()
{
	return (side_a * side_b);
}

void Rectangle::Print()
{
	std::cout << "Rectangle: a= " << side_a << "  b=" << side_b << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "Rectangle deleted" << std::endl;
}
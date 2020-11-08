#pragma once
#include <iostream>
#include "Figura.h"

class Rectangle : public Figura
{
public:
	Rectangle();
	Rectangle(double a, double b);
	Rectangle(std::istream& in);
	Rectangle(const Rectangle& quadrate_1);

	double Square() override;
	void Print() override;

	virtual ~Rectangle();
private:
	double side_a, side_b;
};
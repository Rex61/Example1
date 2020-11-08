#pragma once
#include <iostream>
#include "Figura.h"

class Trapeze : public Figura
{
public:
	Trapeze();
	Trapeze(double a, double b , double height);
	Trapeze(std::istream& in);
	Trapeze(const Trapeze& trapeze_1);

	double Square() override;
	void Print() override;

	virtual ~Trapeze();
private:
	double side_a, side_b , height;
};
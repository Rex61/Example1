#pragma once
#include <iostream>
#include "Figura.h"

class Quadrate : public Figura
{
public:
	Quadrate();
	Quadrate(double a);
	Quadrate(std::istream& in);
	Quadrate(const Quadrate& quadrate_1);

	double Square() override;
	void Print() override;

	virtual ~Quadrate();
private:
	double side_a;
};
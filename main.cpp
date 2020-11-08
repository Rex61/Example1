#include <iostream>
#include "Quadrate.h"
#include "Rectangle.h"
#include "Trapeze.h"

int main()
{
	Figura* ptr = new Quadrate(std::cin);
	ptr->Print();
	std::cout << ptr->Square() << std::endl;
	delete ptr;

	Figura* ptr_1 = new Rectangle(std::cin);
	ptr_1->Print();
	std::cout << ptr_1->Square() << std::endl;
	delete ptr_1;

	Figura* ptr_2 = new Trapeze(std::cin);
	ptr_2->Print();
	std::cout << ptr_2->Square() << std::endl;
	delete ptr_2;

	std::cin.get();
	return 0;
}
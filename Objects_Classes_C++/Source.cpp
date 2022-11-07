#include <iostream>
#include "Dog.h"

int main_1()
{
	char n1[] = "Kaza";
	char n2[] = "Lassi";
	Dog Kaza(40000, n1);
	Dog Lassi(25000, n2);
	Kaza.weight = 40000;
	Kaza.Eating(170);
	Kaza.Sleeping(30);
	for (int i = 0; i < 10; i++)
	{
		Kaza.Playing();
	}


	Lassi.weight = 25000;
	Lassi.Playing();

	Dog* dyndyn = new Dog(23000, n2);

	return 0;
}
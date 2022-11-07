#include <iostream>
#include "CAR.h"

int main2()
{
	char name[] = "Nissan";
	CAR* c1 = new CAR(name, 123);
	strcpy_s(name, "Fiat");
	CAR* c2 = new CAR(name, 234);
	strcpy_s(name, "Mazda");
	CAR* c3 = new CAR(name, 345);
	strcpy_s(name, "Seat");
	CAR* c4 = new CAR(name, 456);
	strcpy_s(name, "Reno");
	CAR* c5 = new CAR(name, 567);
	strcpy_s(c1->color, "Blue");
	c1->numberOfDrives = 0;
	c1->km = 0;
	c1->Driving(10);
	c1->Driving(15);
	c1->Driving(20);
	c1->Driving(25);
	c1->Driving(30);
	c1->CarStatus();
	strcpy_s(c1->color, "Red");
	c2->numberOfDrives = 5;
	c2->km = 100;
	c2->Driving(25);
	c2->Driving(35);
	c2->Driving(10);
	c2->Driving(45);
	c2->Driving(60);
	c2->CarStatus();
	strcpy_s(c1->color, "Black");
	c3->numberOfDrives = 10;
	c3->km = 120;
	c3->Driving(25);
	c3->Driving(35);
	c3->Driving(10);
	c3->Driving(45);
	c3->Driving(60);
	c3->CarStatus();
	strcpy_s(c1->color, "Purple");
	c4->numberOfDrives = 25;
	c4->km = 200;
	c4->Driving(25);
	c4->Driving(35);
	c4->Driving(10);
	c4->Driving(45);
	c4->Driving(60);
	c4->CarStatus();
	strcpy_s(c1->color, "Yellow");
	c5->numberOfDrives = 0;
	c5->km = 0;
	c5->Driving(100);
	c5->Driving(35);
	c5->Driving(10);
	c5->Driving(45);
	c5->Driving(60);
	c5->CarStatus();
	return 0;
}
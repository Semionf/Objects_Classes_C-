#include "CAR.h"
#include <iostream>
#include <string.h>
void CAR::Driving(int kmDriven)
{
	km += kmDriven;
	numberOfDrives++;
}

void CAR::CarStatus()
{
	printf("Car Name: %s, License Number %d, KM driven: %d, Number of drives: %d, Average KM per drive: %d \n",carName, licenseNumber, km, numberOfDrives, km/numberOfDrives);
}

CAR::CAR(char* name, int licenseNumber) {
	strcpy_s(carName, name);
	this->licenseNumber = licenseNumber;
}
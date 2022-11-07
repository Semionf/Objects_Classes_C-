#pragma once
class CAR
{
public:
	char carName[20];
	int km;
	char color[15];
	int licenseNumber;
	char numOfSeats;
	int numberOfDrives;

	CAR(char carName[20], int licenseNumber);

	void Driving(int kmDriven);
	void CarStatus();

};


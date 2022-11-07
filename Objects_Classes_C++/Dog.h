#pragma once
class Dog
{
public:
	//------------Properties-------------
	char name[100];
	int age;
	int weight;

	//------------Methods/Actions-------------
	Dog(int aWeight, char aName[100]);

	void Sleeping(int minutes);

	void Barking(int count);

	void Eating(int gram);

	void Playing();
};
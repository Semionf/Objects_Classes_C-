#pragma once
class BLOG
{
public:
	char name[100];
	int BlogSize;
	char text[1000];

	BLOG(char* name, int BlogSize);
	void SaveInFile();
	char* LoadFromFile();
	void AddLine(char* txt);
	void Print();
};

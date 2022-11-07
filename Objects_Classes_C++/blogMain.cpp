#include <iostream>
#include <string.h>
#include "BLOG.h"
#pragma warning(disable:4996)
int main()
{
	char name[] = "Happy";
	char line[100];
	BLOG *b1 = new BLOG(name, 1000);
	strcpy_s(b1->text, "Hello my name is Semion Furlender\n");
	strcpy_s(line, "I love music\n");
	b1->AddLine(line);
	strcpy_s(line, "I love the sea\n");
	b1->AddLine(line);
	strcpy_s(line, "I love vacations\n");
	b1->AddLine(line);
	b1->SaveInFile();
	strcpy_s(b1->text, "");
	strcpy_s(b1->text, b1->LoadFromFile());
	b1->Print();
	return 0;
}
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "BLOG.h"
#pragma warning(disable:4996)
BLOG::BLOG(char* name, int BlogSize)
{
	strcpy_s(this->name, name);
	this->BlogSize = BlogSize;
}

void BLOG::SaveInFile()
{
	char fileName[50];
	sprintf(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "w");
	if (!f)
	{
		printf("File Error");
		return;
	}
	fputs(text, f);
	fclose(f);
}

char* BLOG::LoadFromFile()
{
	char fileName[50],*textReaden;
	int counter = 0;
	sprintf(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "r");
	if (!f)
	{
		printf("File Error");
		return 0;
	}
	while (fgetc(f) != EOF)
	{
		counter++;
	}
	fclose(f);
	f = fopen(fileName, "r");
	if (!f)
	{
		printf("File Error");
		return 0;
	}
	textReaden = (char*)malloc(sizeof(counter)+1);
	if (!textReaden)
	{
		printf("Allocation Error");
		return 0;
	}
	fread(textReaden, counter, 1, f);
	fclose(f);
	return textReaden;
}

void BLOG::AddLine(char* line)
{
	strcat(text, line);
}

void BLOG::Print()
{
	printf("Blog %s contant:\n%s",name, text);
}
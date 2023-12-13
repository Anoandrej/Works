// Lesson 9 Task 6

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE* input = NULL;
	FILE* output = NULL;
	int c;

	input = fopen("f1.txt", "r");
	output = fopen("f2.txt", "w");

	if (input == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}

	if (output == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}

	do
	{
		c = fgetc(input);
		fprintf(output, "%c", c);
		if (c == 's') fprintf(output, "\n");
	} while (c != EOF);

	fclose(input);
	fclose(output);
	return 0;
}
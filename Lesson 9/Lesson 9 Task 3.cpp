// Lesson 9 Task 3

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE* input=NULL;
	FILE* output = NULL;
	int x;

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

	while (fscanf(input, "%d", &x) == 1)
	{
		x *= 2;
		fprintf(output, "%d\n", x);
	}
	fclose(input);
	fclose(output);
	return 0;
}
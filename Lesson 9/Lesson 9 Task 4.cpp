// Lesson 9 Task 4

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	FILE* input = NULL;
	int c;
	int count = 0;

	input = fopen("f1.txt", "r");

	if (input == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	do
	{
		c = fgetc(input);
		if (c == 's') count++;
	} while (c != EOF);
	fclose(input);
	cout << count;
	return 0;
}
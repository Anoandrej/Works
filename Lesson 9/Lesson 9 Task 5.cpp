// Lesson 9 Task 5


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	FILE* input = NULL;
	FILE* output1 = NULL;
	FILE* output2 = NULL;
	int c;

	input = fopen("f.txt", "r");
	output1 = fopen("f1.txt", "w");
	output2 = fopen("f2.txt", "w");

	if (input == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	if (input == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	if (output1 == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	if (output2 == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}

	while (fscanf(input, "%d", &c) == 1)
		if (c % 2 == 0) fprintf(output1, "%d\n", c);
		else fprintf(output2, "%d\n", c);

	fclose(input);
	fclose(output1);
	fclose(output2);
	return 0;
}
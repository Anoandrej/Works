// Lesson 9 Task 2

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	FILE* task2;
	int x;
	int sum = 0;
	task2 = fopen("f1.txt","r");

	if (task2 == NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	while (fscanf(task2, "%d", &x) == 1)
		sum += x;
	fclose(task2);
	cout << sum << endl;

return 0;
}
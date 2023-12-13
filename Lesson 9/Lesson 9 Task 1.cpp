// Lesson 9 Task 1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	FILE* task1;
	int x;

	task1 = fopen("task1.txt", "r");
	if (task1==NULL)
	{
		cout << "Error opening the file.\n";
		exit(0);
	}
	fscanf(task1, "%d", &x);
	x *= x;
	fclose(task1);
	cout << x<<endl;
	return 0;
}
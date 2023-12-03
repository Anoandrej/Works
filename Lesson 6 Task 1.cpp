// Lesson 6 Task 1.

#include <iostream>
//#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massif[10];
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> massif[i];
	}
	int max = massif[0];
	for (int i = 0; i < 10; i++) {
		if (massif[i] > max) max = massif[i];
	}
	cout << "Максимальное число массива: " << max << endl;
	int min = massif[0];
	for (int i = 0; i < 10; i++) {
		if (massif[i] < min) min = massif[i];

	}
	cout << "Минимальное число массива: " << min << endl;
}

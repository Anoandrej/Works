// Lesson 10 Task 2

#include <iostream>
#include "malloc.h"
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double* arr;
	double a, b = 0, c = 0;
	cout << "Введите количество элменетов массива:\n";
	cin >> a;
	arr = (double*)malloc(a * sizeof(double));
	for (int i = 0; i < a; i++) {
		cout << "Введите элемент массива:\n";
		cin >> arr[i];
	}
	for (int i = 0; i < a; i++) {
		b += arr[i];
	}
	c = b / a;
	cout << "Среднее арифметическое значение элементов массива =/n";
	printf("%.2f",c);
	free(arr);
}
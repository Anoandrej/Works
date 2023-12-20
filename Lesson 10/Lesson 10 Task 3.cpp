// Lesson 10 Task 3

#include <iostream>
#include "malloc.h"
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int* arr;
	int a;
	cout << "Введите количество элменетов массива:\n";
	cin >> a;
	arr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		cout << "Введите элемент массива:\n";
		cin >> arr[i];
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < a; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
	free(arr);
}
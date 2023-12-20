// Lesson 10 Task 4

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
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}
	free(arr);
}
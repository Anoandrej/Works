// Lesson 10 Task 1

#include <iostream>
#include "malloc.h"
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int* arr;
	int a, b=0;
	cout << "Введите количество элменетов массива:\n";
	cin >> a;
	arr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		cout << "Введите элемент массива:\n";
		cin >> arr[i];
	}
	for (int i = 0; i < a; i++) {
		b += arr[i];
	}
	cout << "Сумма всех элементов массива = " << b << endl;
	free(arr);
}
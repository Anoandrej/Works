// Lesson 10 Task 5

#include <iostream>
#include "malloc.h"
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int input;
	int counter = 0;
	int* values = NULL;
	int* many_numbers;
	do {
		cout << "Введите элемент массива (если введено 0 = выход):\n";
		cin >> input;
		counter++;
		many_numbers = (int*)realloc(values, counter * sizeof(int));
		if (many_numbers!= NULL) {
			values = many_numbers;
			values[counter - 1] = input;
		}
		else {
			free(values);
			cout << "Перевыделение памяти\n";
			exit(1);
		}
	} while (input != 0);

	int a = 0, b = 0;
	for (int i = 0; i < counter; i++) {
		a += values[i];
	}
	for (int i = 0; i < counter; i++) {
		if (values[i] > (a / counter)) {
			b++;
		}
	}
	cout << "Количество чисел больших среднеарифметического числа массива: " << b << endl;
	free(values);
	return 0;
}
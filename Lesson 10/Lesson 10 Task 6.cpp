// Lesson 10 Task 6


#include "malloc.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int input;
	int counter = 0;
	char str;
	int* values = NULL;
	int* many_numbers;
	do {
		cout << "Введите элемент массива:\n";
		cin >> input;
		counter++;
		
		many_numbers = (int*)realloc(values, counter * sizeof(int));
		if (many_numbers != NULL) {
			values = many_numbers;
			values[counter - 1] = input;
		}
		else {
			free(values);
			cout << "Перевыделение памяти\n";
			exit(1);
		}
		cout << "Добавить эдемент? (y/n)\n";
		cin >> str;
	} while (str != 'n');

	int sum = 0;
	for (int i = 0; i < counter; i++) {
		sum += values[i];
	}

	cout << "Количество элементов массива: " << counter << endl;
	cout << "Сумма всех элементов массива: " << sum << endl;
	free(values);
	return 0;
}
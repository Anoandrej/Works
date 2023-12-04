// Lesson 6 Task 3.cpp 
#include <iostream>
//#include <stdio.h>;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massif[10];
	int key, index, iteration = 0;
	cout << "Введите 10 последовательных элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> massif[i];
	}
	cout << "Введите искомое число из массива:\n";
	cin >> key;
	int left = 0, right = 10, search = -1;
	while (left <= right) {
		iteration++;
		int mid = (left + right) / 2;
		if (key == massif[mid]) {
			search = massif[mid];
			index = mid;
			break;
		}
		if (key < massif[mid])
			right = mid - 1;
		else left = mid + 1;
	}
	if (search == -1) cout << "-1\n" << endl;
	else cout << "Индекс искомого элемента: " << index << endl << "Количество повторений " << iteration << endl;
	}
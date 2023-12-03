// Lesson 6 Task 4.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massif[10];
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> massif[i];
	}
	int min, temp;
	for (int i = 0; i < 10-1; i++) {
		min = i;
		for (int j = i+1; j < 10; j++) {
			if (massif[j] < massif[min])
				min = j;
		}
		temp = massif[i];
		massif[i] = massif[min];
		massif[min] = temp;
	}
	for (int i = 0; i < 10; i++) {
		cout << massif[i] << " ";
	}

}
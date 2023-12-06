// Lesson 7 Task 1.

#include <iostream>
using namespace std;

int Arrey(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[10];
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int a=Arrey(arr,10);
	cout << "Максимальное число массива: " << a;
}
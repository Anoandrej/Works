// Lesson 7 Task 2.

#include <iostream>
using namespace std;

double Arrey(int arr[], int size)
{
	double sum=0;
	for (int i = 0; i < size; i++) {
			sum += arr[i];
		}
	return sum/size;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[10];
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Среднее арифметическое элиментов массива: " << Arrey(arr, 10);
}
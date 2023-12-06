// Lesson 7 Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;

int Average(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int Num(int arr[], int size, int a)
{
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > a) {
			num++;
		}
	}
	return num;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[10];
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout<<"Количество чиселл массива, больших среднего арифметического массива: " << Num(arr, 10, Average(arr, 10));
}
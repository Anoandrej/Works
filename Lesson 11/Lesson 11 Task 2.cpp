// Lesson 11 Task 2

#include <iostream>;
#include <stdio.h>
using namespace std;

void task2(int* ptr, int x) {
	int b;
	for (int i = 0; i < x; i++) {
		b = (ptr[i] + 2);
		cout << b << " ";
	}
}

int main(){
	setlocale(LC_ALL, "rus");

	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "Введите "<<i+1<<" число массива\n";
		cin >> arr[i];
	}
	int a = 10;
	int* ptr = &arr[0];
	task2(ptr,10);
	free(arr);
}
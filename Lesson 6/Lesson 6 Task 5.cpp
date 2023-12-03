// Lesson 6 Task 5

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
	for (int i = 0; i < 10; i++) {
		for (int j=0; j <9; j++) {
			if (massif[j] < massif[j+1]) {
				int temp = massif[j];
				massif[j] = massif[j+1];
				massif[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << massif[i] << " ";
	}
}
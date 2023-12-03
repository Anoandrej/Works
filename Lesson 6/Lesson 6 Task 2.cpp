// Lesson 6 Task 2.cpp 
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int massif[10];
	int num, key = 0;
	cout << "Введите 10 элементов массива:\n";
	for (int i = 0; i < 10; i++) {
		cin >> massif[i];
	}
	cout << "Введите искомое число из массива:\n";
	cin >> num;
	for (int i = 0; i < 10; i++) {
		if (massif[i] == num) {
			key = 1;
			cout << "Индекс искомого числа: " << i << endl << "Количество повторений: " << i + 1<<endl;
		}
	}
	if (key == 0) {
		cout << "-1\n";
	}
}
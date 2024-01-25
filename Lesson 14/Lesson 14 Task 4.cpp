// Lesson 14 Task 4

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251>nul");

	int num;
	cout << "Введите количество элементов массива: \n";
	cin >> num;
	cout << endl;

	int* array = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "Введите " << i+1 << " число.\n";
		cin >> array[i];
	}

	int even=0, odd=0;
	for (int i = 0; i < num; i++) {
		if (array[i] % 2 == 0) even++;
		else odd++;
	}

	if (even == odd) {
		cout << "\nЧетных и нечетных чисел в массиве равное количество, их: " <<even<< endl;
		exit(0);
	}
	if (even > odd) cout << "\nЧетных чисел массива больше, их: " << even << endl;
	else cout << "\nНечетных чисел массива больше, их: " << odd << endl;

	delete[]array;
}
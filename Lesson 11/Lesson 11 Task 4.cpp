// Lesson 11 Task 4.cpp 

#include <iostream>
using namespace std;

struct cars {
	char brand[20];
	char model[20];
	char number[20];
	int year;
};

int main()
{
	system("chcp 1251>nul");

	cars list[2];
	for (int i = 0; i < 2; i++) {
		cout << i+1 << endl;
		cout << "Марка: ";
		cin >> list[i].brand;
		cout << "Модель: ";
		cin >> list[i].model;
		cout << "Гос.номер: ";
		cin >> list[i].number;
		cout << "Год выпуска: ";
		cin >> list[i].year;
	}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << i+1 << " : " << list[i].brand << " " << list[i].model <<" " << list[i].year << " года выпуска, гос.номер " << list[i].number << endl;
	}
}
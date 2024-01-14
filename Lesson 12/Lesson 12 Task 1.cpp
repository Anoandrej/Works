// Lesson 12 Task 1

#include <iostream>

using namespace std;

struct StudentOfSchool {
	char firstname[20];
	char lastname[20];
	int year;
	int classNumber;
	char symbol;
};

 void ClassСhang (StudentOfSchool num, int a) {
	int newClassNumber = num.classNumber + a;
	if (newClassNumber > 11) {
		cout << "Учащийся " << num.firstname << " " << num.lastname << " " << num.year << " года рождения переведен в " << num.classNumber << num.symbol << " класс\n";
		exit (1);
	}
	cout << "Учащийся " << num.firstname << " " << num.lastname << " " << num.year << " года рождения переведен в " << newClassNumber<< num.symbol << " класс\n";
}

int main()
{
    system("chcp 1251>nul");

	int newClassNumber;
	StudentOfSchool list;
	cout << "Введите имя: ";
	cin >> list.firstname;
	cout << "Введите фамилию: ";
	cin >> list.lastname;
	cout << "Введите год рождения: ";
	cin >> list.year;
	cout << "Введите номер класса: ";
	cin >> list.classNumber;
	cout << "Введите литеру класса: ";
	cin >> list.symbol;
	cout << "Введите новый номер класса: ";
	cin >> newClassNumber;

	ClassСhang (list, newClassNumber);
}
// Lesson 11 Task 5

#include <iostream>
using namespace std;

struct Date {
	int day;
	char month[20];
	int year;
};


struct Banks_clients {
	char lastname[20];
	char firstname[20];
	char middlename[20];
	int number;
	struct Date client;
	int passeries;
	int pasnumber;
	char gov[20];
	struct Date pas;
};

int main()
{
	system("chcp 1251>nul");

	Banks_clients list[2];
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << endl;
		cout << "Фамилия: ";
		cin >> list[i].lastname;
		cout << "Имя: ";
		cin >> list[i].firstname;
		cout << "Отчество: ";
		cin >> list[i].middlename;
		cout << "Номер счета: ";
		cin >> list[i].number;
		cout << "День рождения: ";
		cin >> list[i].client.day;
		cout << "Месяц рождения: ";
		cin >> list[i].client.month;
		cout << "Год рождения: ";
		cin >> list[i].client.year;
		cout << "Серия паспорта: ";
		cin >> list[i].passeries;
		cout << "Номер паспорта: ";
		cin >> list[i].pasnumber;
		cout << "Кем выдан: ";
		cin >> list[i].gov;
		cout << "День выдачи паспорта: ";
		cin >> list[i].pas.day;
		cout << "Месяц выдачи паспорта: ";
		cin >> list[i].pas.month;
		cout << "Год выдачи паспорта: ";
		cin >> list[i].pas.year;
	}
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << " : " << list[i].lastname << " " << list[i].firstname << " " << list[i].middlename << endl;
		cout << "Дата рождения: " << list[i].client.day << "." << list[i].client.month << "." << list[i].client.year << endl;
		cout << "номер чета: " << list[i].number << endl;
		cout << "Паспорт: серия " << list[i].passeries << " номер " << list[i].pasnumber << " выдан " << list[i].gov << " " << list[i].pas.day << "." << list[i].pas.month << "." << list[i].pas.year<<endl;
	}
}
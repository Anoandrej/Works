//Урок 4, Задание 1. Вывод oценки текстом
#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	system("chcp 1251>nul");
	int mark;
	cout << "Введите оенку:"<<endl;
	cin >> mark;
	switch (mark)
	{
	case 2:cout << "Неудовлетворительно"<<endl; break;
	case 3:cout << "Удовлетворительно"<<endl; break;
	case 4:cout << "Хорошо"<<endl; break;
	case 5:cout << "Отлично"<<endl; break;
	default: cout << "Error" << endl; break;
	}
	return 0;
}
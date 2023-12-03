//Урок 4, Задание 2. Калькулятор целых чисел

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	string c;
	cout << "Введите первое число: " << endl;
	cin >> a;
	cout << "Введите второе число: " << endl;
	cin >> b;
	cout << "Введите действие (+, -, *, /): " << endl;
	cin >> c;
	if (c == "+") { cout << a << " + " << b << " = " << a + b; }
	if (c == "-") { cout << a << " - " << b << " = " << a - b; }
	if (c == "*") { cout << a << " * " << b << " = " << a * b; }
	if (c == "/") {
		if (b == 0) { cout << "На ноль делить нельзя" << endl; return 0; }
		cout << a << " / " << b << " = " << a / b;
	}
	return 0;
}

// Lesson 12 Task 6

#include <iostream>

using namespace std;

struct Position {
	double x;
	double y;
};


int main()
{
	system("chcp 1251>nul");

	Position list[5];
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << endl;
		cout << "Введите Х: ";
		cin >> list[i].x;
		cout << "Введите Y: ";
		cin >> list[i].y;
	}

	double a, b, c, d;
	cout << endl << "Введите X заданной точки: " << endl;
	cin >> a;
	cout << endl << "Введите Y заданной точки: " << endl;
	cin >> b;
	cout << endl;

	for (int i = 0; i < 5; i++) {
		if (list[i].x <= a && list[i].y <= b) {
			c = list[i].x;
			d = list[i].y;
		}
	}
	cout << endl << "<Координаты близлежащей к заданной точки: \n" << "X= " << c << "\nY= " << d << endl;
}
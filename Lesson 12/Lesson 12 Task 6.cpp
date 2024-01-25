// Lesson 12 Task 6

#include <iostream>
#include <math.h>

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

	double a, b, c, d, dist1, dist2;
	cout << endl << "Введите X заданной точки: " << endl;
	cin >> a;
	cout << endl << "Введите Y заданной точки: " << endl;
	cin >> b;
	cout << endl;
	dist1 = sqrt(((a - list[0].x) * (a - list[0].x)) + ((b - list[0].y) * (b - list[0].y)));
	c = list[0].x;
	d = list[0].y;

	for (int i = 1; i < 5; i++) {
		dist2 = sqrt(((a-list[i].x) * (a-list[i].x)) + ((b-list[i].y) * (b-list[i].y)));
		if (dist2 <= dist1) {
			dist1=dist2;
			c = list[i].x;
			d = list[i].y;
		}
	}
	cout << endl << "<Координаты точки, близлежащей к заданной точке: \n" << "X= " << c << "\nY= " << d << endl;
}
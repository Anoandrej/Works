// Lesson 17 Task 1

#include <iostream>
using namespace std;


class Rectangle
{
	int width, height;

public:
	Rectangle(int w, int h)
	{
		width = w;
		height = h;
	}
public:
	friend int area(Rectangle& rectangle);
};

int area(Rectangle& rectangle) {
	return rectangle.width * rectangle.height;
}


int main()
{
	system("chcp 1251>nul");

	int a, b;
	cout << "Введите ширину прямоугольника: \n";
	cin >> a;
	cout << "Введите длину прямоугольника: \n";
	cin >> b;
	Rectangle obj(a,b);
	cout<<"\nПлошадь прямоугольника равна: "<<area(obj)<<endl;
}

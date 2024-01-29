// Lesson 15 Task 1

#include <iostream>
using namespace std;

struct Adder {
public:
	void price(double b) {
		sum += b;
	};
	double totalPrice() {
		return sum;
	}
private:
	double sum;
};


int main()
{
	system("chcp 1251>nul");

	Adder c;
	int a;
	double b;
	cout << "Введите количество товаров: \n";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cout << "Введите цену " << i + 1 << " товара:\n";
		cin >> b;
		c.price(b);
	}
	cout<<"Total price: "<<c.totalPrice();
}
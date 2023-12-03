// Числа Фибоначчи
#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	cout << a << endl << b << endl;
	for (int i = 0; i < 8; i++) {
		c = a + b;
		a = b; b = c;
		cout << c << endl;
	}
	return 0;
}
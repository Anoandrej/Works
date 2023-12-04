// Lesson 1 Task 9.cpp 
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b;
    cout << "Введите два числа:\n";
    cin >> a;
    cin >> b;
    if (a % b == 0) {
        cout << "Первое число " << a << " делится на второе число " << b << endl;
    }
}
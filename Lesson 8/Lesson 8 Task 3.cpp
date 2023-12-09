// Lesson 8 Task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
using namespace std;

int Ffunction(int n);

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m;
    cout << "Введите число: \n";
    cin >> n;

    cout << "Результат выполнения функции: " << Ffunction(n) << endl;
    return 0;
}

int Ffunction(int n)
{
    if (n == 1||n==2) return 1;
    if (n > 2) return Ffunction(n - 2)*n;
}

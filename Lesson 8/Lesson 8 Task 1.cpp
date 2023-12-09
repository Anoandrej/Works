// Lesson 8 Task 1

#include <iostream>
using namespace std;

int Ffunction (int n);
int Gfunction (int n);

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m;
    cout << "Введите первое число: \n";
    cin >> n;
    cout << "Введите второе число: \n";
    cin >> m;

    cout << "Результат выполнения функции: " << Ffunction(n) + Gfunction(m)<<endl;
    return 0;
}

int Ffunction (int n)
{
    if (n == 1) return 1;
    if (n>1) return 2 * Gfunction(n - 1) + 5 * n;
}
int Gfunction (int n)
{
    if (n == 1) return 1;
    if (n > 1) return Ffunction(n - 1) + 2 * n;
}

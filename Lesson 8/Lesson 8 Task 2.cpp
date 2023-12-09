// Lesson 8 Task 2
    
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
    if (n == 1) return 1;
    if (n % 2 == 0) return 2 * Ffunction(n - 1) + 5 * n;
    if (n > 1) return 2 * Ffunction(n - 2);
}

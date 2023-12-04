// Lesson 1 Task 10.
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int num, n=0;
    cout << "Введите ццелое трехзначное число:\n";
    cin >> num;

    while (num != 0)
    {
        n += num % 10;
        num /= 10;
    }
    if (n > 9) {
        cout << "Сумма цифр " << n << endl;
    }
}

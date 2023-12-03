//урок 4, Задание 5, Вывод последовательности чисел
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    start:
    int a, b;
   cout << "Введите первое число:\n";
   cin >> a;
   cout << "Введите второе:\n";
   cin >> b;
   if (a > b) {
       cout << "Второе число должно быть больше первого\n";
       goto start;
   }
   cout << endl;
   cout << a<<endl;
   for (int i = a + 1; i <= b; i++) {
       cout << i<<endl;
   }
}


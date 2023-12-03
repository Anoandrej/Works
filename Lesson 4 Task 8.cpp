// Урок 4, Задание 8. Вывод минимального числа
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c;
    cout << "Введите число для начала цикла:\n";
    cin >> a;

    cout << "Введите число:\n";
    cin >> b;
          for (int i = 1; i < a; i++) {
        cout << "Введите следующее число:\n";
        cin >> c;
        if (b < c)
        {
            c=b;
        }
    //    else {
     //       min = c;
     //   }
    }
          cout << "Минимальное число: " << c << endl;
}
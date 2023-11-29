//Урок 4, Задание 3. Количество чисел, кратных 5
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int a=1, b=0;
           while (a != 0) {
            cout<< "Введите число (для окончания ввода нужно ввести 0):" << endl;
            cin >> a;
           if (a%5==0&&a!=0)
               b++;
     }
        cout << "Вы ввели " << b << " чисел(-ла), кратных 5." << endl;
}
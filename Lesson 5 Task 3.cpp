// Урок 5 Задание 3. Вывод суммы элементов массива, не кратных 3.

#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int sum=0;
    for (int i = 0; i < 10; i++) {
        if (a[i] % 3!= 0) {
            sum += a[i];
        }
    }
    cout << sum << endl;
}
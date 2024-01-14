// Lesson 12 Task 4

#include <iostream>

using namespace std;

struct Student {
    char lastname[20];
    char firstname[20];
    int numberClass;
};


int main()
{
    system("chcp 1251>nul");

    Student list[5];
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << endl;
        cout << "Фамилия: ";
        cin >> list[i].lastname;
        cout << "Имя: ";
        cin >> list[i].firstname;
        cout << "Номер класса: ";
        cin >> list[i].numberClass;
    }

    int num;
    cout <<endl<< "Введите номер класс для сортировки: " << endl;
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (list[i].numberClass == num) {
            cout <<endl<< list[i].lastname << endl;
        }
    }
}
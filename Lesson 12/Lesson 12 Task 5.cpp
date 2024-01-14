// Lesson 12 Task 5

#include <iostream>

using namespace std;

struct Library {
    char title[20];
    char author[20];
    int yearOfPublication;
    int price;
};


int main()
{
    system("chcp 1251>nul");

    Library list[5];
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << endl;
        cout << "Название книги: ";
        cin >> list[i].title;
        cout << "Автор: ";
        cin >> list[i].author;
        cout << "Год издания: ";
        cin >> list[i].yearOfPublication;
        cout << "Цена: ";
        cin >> list[i].price;
    }

    int year, sum=0, price=0;
    cout << endl << "Введите год издания: " << endl;
    cin >> year;

    for (int i = 0; i < 5; i++) {
        if (list[i].yearOfPublication > year) {
            sum++;
            price += list[i].price;
        }
    }
    cout << endl <<"Количество книг, выпущенных после "<<year<<" года " << sum <<endl<<"Их общая стоимость: " << price << endl;
}
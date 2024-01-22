// Lesson 13 Task 1

#include <iostream>
#include <malloc.h>
#include <iomanip>
using namespace std;

struct Product {
    char name[20];
    double price;
    int amount;
};

int main()
{
    system("chcp 1251>nul");

    int a;
    double sum = 0;
    cout << "Введите количество товаров: \n";
    cin >> a;

    Product *list;
    list = (Product*)malloc(a * sizeof(Product));
    for (int i = 0; i < a; i++) {
        cout << "\nВведите название " << i + 1 << " товара:\n";
        cin >> (list+i)->name;
        cout << "Введите стоимость товара: \n";
        cin >> (list+i)->price;
        cout << "Введите количество товара: \n";
        cin >> (list + i)->amount;

        sum += (((list + i)->price) * ((list + i)->amount));
    }

    cout << "\nСтоимость всех товаров: " <<setw(10)<< setfill('0')<<fixed<<setprecision(2) <<sum<<endl;

} 
// STL Task 2

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string,float>products;
	products.emplace("apple",1.0);
	products.emplace("banana",0.5);
	products.emplace("cherry",2.5);

	string product;
	cout << "Enter product: \n";
	cin >> product;

	cout << "\nPrice of " << product << " $" << products[product]<<endl;


}

/* Cоздайте отображение для хранения пар "название товара - цена".Выведите информацию о товаре по его названию.

Пример работы программы :
Входные данные :
products["apple"] = 1.0;
products["banana"] = 0.5;
products["cherry"] = 2.5;
Выходные данные :
Price of banana : $0.5*/
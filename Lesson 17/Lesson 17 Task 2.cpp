// Lesson 17 Task 2.

#include <iostream>
//#include<string>
//#include<cstring>

using namespace std;

class Person
{
    int age;
protected:
	 string name;

    /*Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }*/
	void display() {
        cout << "Имя: " << name << " Возраст: " << age << endl;
    }
};

class Employee :protected Person
{
    string company;

    Employee(string company)
    {
        this->company = company;
    }
    void showEmployeeName() {
        cout << "Имя: " << name << " Компания: " << company << endl;
    }
};


int main()
{
	system("chcp 1251>nul");

    string name, company;
    int age;

    cout << "Имя сотрудника: \n";
    cin >> name;
    cout<<"Возраст сотрудника: \n";
    cin >> age;

    Person firstPerson(name, age);
    firstPerson.display();

    cout << "Имя сотрудника: \n";
    cin >> name;
    cout << "Возраст сотрудника: \n";
    cin >> age;
    cout << "Название компании: \n";
    cin >> company;

    Employee firstEmploy(name, age, company);
    firstEmploy.showEmployeeName();
}
// Lesson 17 Task 2.

#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class Person
{
    int age;
protected:
    char* name[128];
public:
    Person(int age, char* name) {
        this->age = age;
    };

    void display() {
        cout << "Имя: " << name << " Возраст: " << age << endl;
    }
};

class Employee :public Person
{
    string company;
public:
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

    char name[128];
    string company;
    int age;

    cout << "Имя сотрудника: \n";
    cin >> name;
    cout<<"Возраст сотрудника: \n";
    cin >> age;

    Person firstPerson(age, *name);
    firstPerson.display();

    cout << "Имя сотрудника: \n";
    cin >> name;
    cout << "Возраст сотрудника: \n";
    cin >> age;
    cout << "Название компании: \n";
    cin >> company;

    Employee firstEmploy(company);
   
    firstEmploy.showEmployeeName();
}
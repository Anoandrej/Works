// STL Task 5

#include <iostream>
#include <set>
using namespace std;

int main()
{
   set < string > uniqueNames{"Alice","Bob","Charlie"};

    string nameToCheck;
    cout << "Enter name: \n";
    cin >> nameToCheck;

    if (uniqueNames.find(nameToCheck) != uniqueNames.end()) {
        cout << nameToCheck << " is in the set.\n";
    }
    else {
        cout << nameToCheck << " is not on set.\n";
    }
    return 0;
}

// Создайте множество, чтобы хранить уникальные имена пользователей. Проверьте, содержит ли множество конкретное имя.
//
// Пример работы программы :
// Входные данные :
// uniqueNames.insert("Alice");
// uniqueNames.insert("Bob");
// uniqueNames.insert("Charlie");
//
// std::string nameToCheck = "Alice";
//
// Выходные данные :
// Alice is in the set.
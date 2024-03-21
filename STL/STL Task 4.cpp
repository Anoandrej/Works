// STL Task 4

#include <set>
#include <iostream>


int main()
{
    std::set<int>Sort{ 1,2,3,2,4,1,5 };

    for (auto& item : Sort) {
        std::cout << item <<" ";
    }
    return 0;
}

// Используя контейнер set, реализуйте функцию для удаления дубликатов из списка чисел.
//
// Пример работы программы :
// Входные данные :
// {1, 2, 3, 2, 4, 1, 5}
//
// Выходные данные :
// List without duplicates : 1 2 3 4 5
// Lesson 12 Task 2.

#include <iostream>

using namespace std;

struct point {
    int x;
    int y;
    int z;
};

int main()
{
    setlocale(LC_ALL, "Russian");

    point coordinates[3];
    for (int i = 0; i<3; i++) {
        cout << "Введите х\n";
        cin >> coordinates[i].x;
        cout << "Введите y\n";
        cin >> coordinates[i].y;
        cout << "Введите z\n";
        cin >> coordinates[i].z;
    }
    int sum=0;
    for (int i = 0; i < 3; i++) {
        sum += coordinates[i].x;
    }
    cout << "Сумма координат Х всех точек = "<<sum << endl;
}
// Lesson 12 Task 3.

#include <iostream> 
using namespace std;

struct Point {
    int x;
    int y;
    char color;
};

int main() {

    setlocale(LC_ALL, "Russian");

    Point arr[5];
    int count_red = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Введите координаты и цвет " << i + 1 << ": ";
        cin >> arr[i].x >> arr[i].y >> arr[i].color;
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i].color == 'r' && arr[i].x < 10) {
            count_red++;
        }
    }
    cout << "Количество точек красного цвета, координата x которых меньше 10: " << count_red << endl;

    return 0;
}
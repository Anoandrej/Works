#include <iostream> 
using namespace std; 
int main() { 
    setlocale(LC_ALL, "Russian");
    cout << "x, y? "; 
    double x, y; 
    cin >> x >> y; 
    if (x > 0 && y > 0) puts("I"); 
    if (x < 0 && y > 0) puts("II"); 
    if (x < 0 && y < 0) puts("III"); 
    if (x > 0 && y < 0) puts("IV"); 
    if (!x || !y) puts("Точка расположена на координатной оси"); 
}
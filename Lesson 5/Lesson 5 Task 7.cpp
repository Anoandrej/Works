//Урок 5 Задание 7. Вывод двумерного массива 10х10 с суммой главной диагонали.
#include<iostream>
using namespace std;

int main() {
	int sum_diag=0;
	int a[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = i * j;
			cout << a[i][j] << "\t";
			if (i == j) sum_diag += a[i][j];
		}
		cout << endl;
	}
		cout <<endl<< sum_diag<<endl;
}
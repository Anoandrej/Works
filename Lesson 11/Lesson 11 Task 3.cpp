// Lesson 11 Task 3

#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int **arr;
	int a, b;
	cout << "Введите количество строк массива: \n";
	cin >> a;
	cout << "Введите количество столбцов массива:\n";
	cin >> b;
	arr = (int**)malloc(a *  sizeof(int*));
	for (int i = 0; i < a; i++){
		arr[i] = (int*)malloc(b * sizeof(int));
		for (int j = 0; j < b; j++) {
			cout << "Введите [" << i << "]" << " [" << j << "] элемент массива : \n";
			cin >> arr[i][j];
		}
	}
	
	int sum_diag = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			//cout << arr[i][j] << "\t";
			if (i == j) sum_diag += arr[i][j];
		}
		//cout << endl;
	}
	cout << endl << sum_diag << endl;
	free(arr);
}
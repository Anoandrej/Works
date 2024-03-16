#include <iostream>
#include "StaticLib.h"
#include "malloc.h"
#include "Windows.h"
#include "DynamicSort.h"


int main()
{
	setlocale(LC_ALL, "Russian");


	int* arr;
	int a;
	std::cout << "¬ведите количество элменетов массива:\n";
	std::cin >> a;
	arr = (int*)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++) {
		std::cout << "¬ведите элемент массива:\n";
		std::cin >> arr[i];
	}

	Sort(a, arr);
	DynamicSort(a, arr);
	return 0;
}
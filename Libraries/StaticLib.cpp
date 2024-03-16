#include "StaticLib.h"
#include <iostream>

int Sort(int a, int* arr)
{
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		std::cout << arr[i] << " ";
	}
	free(arr);

	return 0;
}

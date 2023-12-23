// Lesson 11 Task 1

#include <iostream>;
#include <stdio.h>
using namespace std;

int task1(int* a, int* b) {
	return ((*a) *= 2) + ((*b) += 2);	
}

int main() {
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	int* a1 = &a;
	cout << "Enter b: ";
	cin >> b;
	int* b1 = &b;
	cout << a << " " << b << " " << task1(a1, b1);
} 
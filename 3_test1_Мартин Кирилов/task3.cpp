#include <iostream>
using namespace std;

bool contains_element(int a[], int size, int element) {
	for (int i = 0; i < size; i++) {
		if (a[i] == element) {
			return true;
		}
	}
	return false;
}

void elements_diff(int a1[], int a2[], int size) {
	cout << "Elements diff: ";
	for (int i = 0; i < size; i++) {
		if (!contains_element(a2, size, a1[i])) {
			if (a1[i] % 13 != 0) {
				cout << a1[i] << " ";
			}
		}
	}
	cout << endl;
}

void elements_union(int a1[], int a2[], int size) {
	cout << "Elements union: ";
	for (int i = 0; i < size; i++) {
		cout << a1[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		if (!contains_element(a1, size, a2[i])) {
			cout << a2[i] << " ";
		}
	}
	cout << endl;
}

int main() {
	const int SIZE = 10;
	int arr1[10];
	int arr2[10];

	cout << "Enter the first array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr1[i];
	}

	cout << "Enter the second array: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr2[i];
	}

	elements_diff(arr1, arr2, 10);

	cout << endl;

	elements_union(arr1, arr2, 10);

	system("PAUSE");
	return 0;
}

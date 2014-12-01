#include <iostream>
using namespace std;

bool is_even(int a) {
	return !(a % 2);
}

int diff_digits(int a) {
	int a_copy = a;
	int first_digit = 0;
	while (a_copy > 0) {
		first_digit = a_copy;
		a_copy /= 10;
	}
	return (first_digit - (a % 10));
}

int reverse_number(int a) {
	int reversed_num = 0;
	while (a > 0) {
		reversed_num *= 10;
		reversed_num += a % 10;
		a /= 10;
	}
	return reversed_num;
}

int edit_number(int a) {
	int a_copy = a;
	int new_number = 0;

	while (a_copy > 0) {
		new_number *= 10;
		int digit = a_copy % 10;
		a_copy /= 10;

		if (digit % 3 == 0) {
			digit /= 3;
		}
		else {
			if (is_even(digit)) {
				digit /= 2;
			}
			else {
				digit += 2;
			}
		}
		new_number += digit;
	}

	return new_number;
}

int main() {
	int x;
	cout << "Enter x: " << endl;
	cin >> x;

	cout << diff_digits(x) << endl;

	int reversed_number = edit_number(x);
	int final_number = reverse_number(reversed_number);

	cout << final_number << endl;

	if (reversed_number > final_number) {
		cout << reversed_number << endl;
	}
	else {
		cout << final_number << endl;
	}

	system("PAUSE");
	return 0;
}
// not working good for negative numbers , but i'll forgive you this
// 2.0 / 1.5 + 0.5

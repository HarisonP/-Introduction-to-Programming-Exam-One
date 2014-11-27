#include <iostream>
#include <cmath>

using namespace std;

int Find_length_x(int copy)
{
	int counter = 0;
	while (copy > 0)
	{
		copy /= 10;
		counter++;
	}
	return counter;
}

int Multiplication(int copy, int counter)
{
	int first_digit = copy / pow(10, (double)counter - 1);
	int last_digit = copy % 10;

	return first_digit * last_digit;
}

int New_number(int copy, int counter)
{
	int current_copy = 0;
	int new_number = 0;
	int current = 0;

	for (int i = 1; i <= pow(10, (double)counter - 1); i *= 10)
	{
		current = (copy / i) % 10;


		if (current % 3 == 0)
		{
			current_copy = current / 3;
		}
		else if (current % 2 == 0)
		{
			current_copy = current / 2;
		}
		else
		{
			current_copy = current + 2;
		}

		new_number += current_copy * i;
	}

	return new_number;
}

int Bigger_number(int copy, int counter)
{
	int new_number_copy = 0;
	int new_number = 0;
	int current = 0;

	for (int i = 1, j = pow(10, (double)counter - 1); i <= pow(10, (double)counter - 1); i *= 10, j /= 10)
	{
		current = (copy / i) % 10;
		new_number_copy += current * j;
	}

	if (new_number >= new_number_copy)
	{
		return new_number;
	}
	else
	{
		return new_number_copy;
	}
}

int main()
{
	//Problem 2

	int x;
	cin >> x;

	int copy = x;

	int counter = Find_length_x(copy);
	copy = x;

	cout << Multiplication(copy, counter) << endl;
	cout << New_number(copy, counter) << endl;
	cout << Bigger_number(copy, counter) << endl;

	system("pause");
	return 0;
}

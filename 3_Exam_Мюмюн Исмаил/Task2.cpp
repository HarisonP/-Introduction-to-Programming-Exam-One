#include <iostream>
#include <cmath>

using namespace std;

int product(int x)
{
	int last_digit = x % 10;
	int copy = x;
	int size = 0;
	int number[100] = { 0 };
	int result;

	while (copy > 0)
	{
		number[size] = copy % 10;
		copy /= 10;
		size++;
	}

	result = number[size - 1] * last_digit;
	
	return result;
}

int change(int x)
{
	int copy = x;
	int result = 0;
	int counter = 0;
	int last_digit;

	while (copy > 0)
	{
		last_digit = copy % 10;

		if (last_digit % 3 == 0)
		{
			last_digit /= 3;
		}
		else if (last_digit % 2 == 0)
		{
			last_digit /= 2;
		}
		else
		{
			last_digit += 2;
		}

		result += last_digit * pow(10.0, counter);
		copy /= 10;
		counter++;
	}

	return result;

}

int reverse(int x)
{
	int size = 0;
	int result = 0;
	int reversed[100] = { 0 };
	int last_digit;
	while (x > 0)
	{
		last_digit = x % 10;
		reversed[size] = last_digit;
		size++;
		x /= 10;
	}

	int power = size - 1;

	for (int i = 0; i < size; i++)
	{
		result += reversed[i] * pow(10.0, power);
		power--;
	}

	return result;

}

int compare(int a, int b)
{
	int bigger = a;
	if (a < b)
	{
		bigger = b;
	}

	return bigger;
}

int main()
{
	int x;
	int first_result = 0;
	int second_result = 0;
	cin >> x;

	int reversed = reverse(x);

	first_result = product(x);
	second_result = change(x);
	
	cout << first_result << ' ' << second_result << ' ' << compare(x, reversed) << endl;

	return 0;
}
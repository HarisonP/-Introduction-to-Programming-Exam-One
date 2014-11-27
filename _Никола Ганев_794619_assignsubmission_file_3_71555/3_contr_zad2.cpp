#include <iostream>
#include <cmath>
using namespace std;
int a(int x) // a)
{
	int last_digit = 0;
	int first_digit = 0;
	last_digit = x % 10;
	while ( x != 0) // a)
	{
		first_digit = x % 10;
		x = x / 10;
	}
	x = last_digit - first_digit;
	return x;
}
int main()
{
	int x = 0;
	cin >> x;
	int copy_x = x;
	int last_digit = 0;
	int first_digit = 0;
	int new_x = 0;
	int i = 0;
	cout << a(x) << endl; // a)
	while (copy_x != 0) // b)
	{
		last_digit = copy_x % 10;
		if (last_digit % 3 == 0)
		{
			last_digit = last_digit / 3;
		}
		else if (last_digit % 2 == 0)
		{
			last_digit = last_digit / 2;
		}
		else
		{
			last_digit += 2;
		}
		new_x = new_x + last_digit * pow(10.0, i);
		i++;
		copy_x = copy_x / 10;
	}
	cout << new_x << endl;
	copy_x = 0;
	while (new_x != 0)
	{
		last_digit = new_x % 10;
		copy_x = copy_x * 10 + last_digit;
		new_x = new_x / 10;
	}
	if (copy_x > new_x)
	{
		cout << copy_x << endl;
	}
	else
	{
		cout << new_x << endl;
	}
	return 0;
}
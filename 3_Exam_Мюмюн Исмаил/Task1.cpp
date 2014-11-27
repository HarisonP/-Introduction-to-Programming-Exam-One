#include <iostream>
#include <cmath>

using namespace std;


int calculate(int x)
{
	int function;

	if (x <= 0)
	{
		function = abs(x + 2);
	}
	else if (x <= 12)
	{
		function = pow((double)x, 4) + (2 * x) + 333;
	}
	else if (x <= 39)
	{
		if (x % 2 != 0)
		{
			function = pow((double)x, 2) * (x - 1) * (x + 1);
		}
		else if (x % 2 == 0)
		{
			int last_digit = x % 10;
			function = last_digit * (x / 2 - 6);
		}
	}
	else if (x > 39)
	{
		return -1;
	}

	return function;
}


int main1()
{
	int x;

	cin >> x;

	if (calculate(x) == -1)
	{
		cout << "X is out of bounds" << endl;
	}
	else
	{
		cout << calculate(x) << endl;
	}

	return 0;
}
#include <iostream>
#include <cmath>
//3ta grupa, 4ti variant
using namespace std;

int main()
{
	// Problem 1
	double x;
	cin >> x;

	double result = 0.0;

	if (x <= 0)
	{
		result = abs(x + 2);
	}
	else if (x > 0 && x <= 12)
	{
		result = pow(x, 4.0) + x * 2.0 + 333;
	}
	else if (x > 12 && x <= 39)
	{
		if (x == 16 || x == 25 || x == 36)
		{
			result = sqrt(x);
		}
		else if ((int)x % 2 == 0)
		{
			result = ((int)x % 10) * ((x / 2) - 6);
		}
		else
		{
			result = pow(x, 2) * (x - 1) * (x + 1);
		}
	}
	else if (x > 39)
	{
		cout << "Out of range exception" << endl;
		system("pause");
		return 0;
	}

	cout << result << endl;

	system("pause");
	return 0;

	


}

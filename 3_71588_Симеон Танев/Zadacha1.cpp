#include <iostream>
#include <cmath>
using namespace std;

int main1()
{
	int functionX = 0;
	int x = 0;

	cin >> x;

	if (x <= 39)
	{
		if (x <= 0)
		{
			functionX = (abs(double(x) + 2));
		}

		if (x > 0 && x <= 12)
		{
			functionX = (pow(double(x), 4) + x * 2 + 333);
		}
		if (x > 12 && x <= 39)
		{
			if ( x == 16 || 25 || 36)
			{
				functionX = sqrt(double(x));
			}
			if (x % 2 != 0 && x != 16 || 25 || 36)
			{
				functionX = (x*x*(x - 1)*(x + 1));
			}
			if (x % 2 == 0 && x != 16 || 25 || 36)
			{
				functionX = (int(x % 10)*(x / 2 - 6));
			}
		}
		cout << functionX << endl;
	}
	else
	{
		cout << "X is not within the...allowed...?numbers" << endl;
	}
	system("pause");
	return 0;
}
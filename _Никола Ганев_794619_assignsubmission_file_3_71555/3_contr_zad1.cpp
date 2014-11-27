#include <iostream>
#include <cmath>
using namespace std;
bool sqrt_function(int x)
{
	for (int i = 1; i < x; i++)
	{
		if (i * i == x)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int x = 0 ;
	cin >> x ;
	if (x < 0)
	{
		cout << x * x * x << endl;
	}
	else if ( x > 0 && x <= 8 )
	{
		x = (x * 2) * 5 + 2 * pow(x, 4);
		cout << x << endl;
	}
	else if (x > 8 && x <= 25)
	{
		if (sqrt_function)
		{
			x = sqrt((double)x);
			cout << x << endl;
		}
		else if (x % 2 != 0)
		{
			x = x * (x * x - 1);
			cout << x << endl;
		}
		else
		{
			x = (x % 10) * x / 2;
			cout << x << endl;
		}
	}
	else
	{
		cout << " Error!!! " << endl;
	}

	return 0;
}
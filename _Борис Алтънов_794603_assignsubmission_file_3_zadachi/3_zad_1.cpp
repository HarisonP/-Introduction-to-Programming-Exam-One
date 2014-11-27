#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	int func=0;
	cout << "Enter x: ";
	cin >> x;

	if (x <= 0)
	{
		func = pow(x, 3);
		cout << func;
	}
	else if (x > 0 && x <= 8)
	{
		func = abs((x * 2) * 5 + 2 * pow(x, 4));
		cout << func;
	}
	else if (x > 8 && x <= 25)
	{
		if (x == 9 || x == 16 || x == 25)
		{
			func = sqrt(x)
			cout << func;
		}
		else if(x % 2 != 0)
		{
			func = x * (x*x - 1);
			cout << func;
		}
		else if (x % 2 == 0)
		{
			func = ((x % 10) * (x / 2));
			cout << func;
		}
	}
	else if (x > 25)
	{
		cout << "x is not valid!";
	}
	cout << endl;

	
	return 0;
}
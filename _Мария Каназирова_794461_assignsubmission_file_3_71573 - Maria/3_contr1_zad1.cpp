#include<iostream>
#include<cmath>
using namespace std;
int function(int n)
{
	double sqrt_n = sqrt((double)n);
	if (n > 39)
	{
		cout << n << " is not in range" << endl;
		return 0;
	}
	if (n <= 0)
	{
		return abs(n + 2);
	}

	if (n > 0 && n <= 12)
	{
		//cool
		if (sqrt_n / (int)sqrt((double)n) == 1)
		{
			return sqrt((double)n);
		}
		else
		{
			return pow((double)n, 4) + 2 * n + 333;
		}
	}

	if (n > 12 && n <= 39)
	{

		if (n % 2 == 1)
		{
			if (sqrt_n / (int)sqrt((double)n) == 1)
			{
				return sqrt((double)n);
			}
			else
			{
				return n * n * (n - 1) * (n + 1);
			}
		}



		if (n % 2 == 0)
		{
			if (sqrt_n / (int)sqrt((double)n) == 1)
			{
				return sqrt((double)n);
			}
			else
			{
				int last_digit = n % 10;
				return last_digit * (n / 2 - 6);
			}
		}

	}

}
int main()
{

	int x;
	cin >> x;
	cout << function(x);

	return 0;
}

//score 1.0/1.0
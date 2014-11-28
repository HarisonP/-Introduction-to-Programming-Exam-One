#include <iostream>
#include <cmath>
using namespace std;






int main()
{
	cout << " Enter a number: ";
	int x = 0;
	cin >> x;


	if (x <= 0)
	{
		int sum1 = 0;
		sum1 = abs(x + 2);
		cout << sum1;
		return 1;
	}

	if (x > 0 && x <= 12)
	{
		int sum2 = 0;
		// pow expects double
		// -0.1
		sum2 = pow(x, 4) + pow(2, x) + 333;

		cout << sum2;
		//why 1?
		return 1;
	}

	if (x > 12 && x <= 39)
	{
		if (x == 16 || x == 25 || x == 36)
		{
			double x = 0;
			double sum3 = 0;
			//wait whatt??
			// you need sqrt here??
			// - 0.2
			sum3 = fabs(x);

			cout << sum3;

			return 0;
		}

		if (x % 2 != 0)
		{
			int sum4 = 0;
			sum4 = (x*x)*(x - 1)*(x + 1);

			cout << sum4;

			return 0;
		}

		if (x % 2 == 0)
		{
			int x = 0;
			int sum5;
			int lastDigit = 0;
			lastDigit = x % 10;

			sum5 = lastDigit*(x / 2 + 6);

			cout << sum5;
			return 0;
		}
	}

	if (x > 39)
	{

		cout << " Incorrect input!";
		return 0;

	}

	system("pause");
	return 0;

}
//score: 0.7/1.0
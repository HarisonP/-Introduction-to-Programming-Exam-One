#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, function;
	cin >> x;

	if (x < 0)
	{
		function = pow((double)x, 3);
		cout << function << endl;
		//return 0;
	}

	else if (x > 0 && x <= 8)
	{
		int number_one, number_two;
		number_one = (x * 2) * 5;
		number_two = 2 * pow( (double)x, 4 );

		function = abs(number_one + number_two);
		cout << function << endl;
		//return 0;
	}

	else if (x > 8 && x <= 25)
	{
		//nope :(
		// -0.2
		if (sqrt(x) == 0)
		{
			function = sqrt(x);
		}

		else if (x % 2 != 0)
		{
			function = x * ( pow( (double)x, 2 ) - 1 );

		}

		else if (x % 2 == 0)
		{
			int last_digit;
			last_digit = x % 10;

			function = last_digit * (x / 2);

		}
		cout << function << endl;
		//return 0;
	}

	else if (x > 25)
	{
		cout << " x is not in the range " << endl;
	}


	return 0;
}
// no returns on some important places
// - 0.1

//score 0.7/1.0

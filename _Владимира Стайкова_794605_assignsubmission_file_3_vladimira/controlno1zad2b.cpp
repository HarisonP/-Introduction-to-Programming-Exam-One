#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, last_digit;
	cin >> n;
	while (n > 0)
	{
		last_digit = n % 10;
		if (n % 3 == 0)
		{
			n = n / 3;
			cout << n;
			return 0;
		}
		//no need of n % 3 != 0 
		if (n % 3 != 0 && n % 2 == 0)
		{
			n = n / 2;
			cout << n;
			return 0;
		}
		//no need of n % 3 != 0
		// just else could be used
		if (n % 2 != 0 && n % 3 != 0)
		{
			n = n + 2;
			cout << n;
			return 0;
		}
		n = n / 10;
	}
	// you should construct the number here, not just to print some digits on the screen
	// - 0.5
	// no else or else if used:
	// -0.1
	cout << endl;
	return 0;

}

//score : 0.4/1.0
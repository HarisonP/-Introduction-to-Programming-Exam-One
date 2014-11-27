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
		if (n % 3 != 0 && n % 2 == 0)
		{
			n = n / 2;
			cout << n;
			return 0;
		}
		if (n % 2 != 0 && n % 3 != 0)
		{
			n = n + 2;
			cout << n;
			return 0;
		}
		n = n / 10;
	}
	cout << endl;
	
	return 0;

}
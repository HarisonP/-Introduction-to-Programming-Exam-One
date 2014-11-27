#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, last_digit, sum = 0, new_digit;
	cin >> n;
	last_digit = n % 10;
	while (n > 0)
	{
		new_digit = n % 10;
		n = n / 10;

	}
	cout << last_digit - new_digit;
	return 0;

}



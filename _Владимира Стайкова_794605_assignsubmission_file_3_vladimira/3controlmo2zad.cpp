#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	// new digit should be actually first_digit right?
	int n, last_digit, sum = 0, new_digit;
	cin >> n;
	last_digit = n % 10;
	while (n > 0)
	{
		//this could be done smarter:
		// -0.1
		new_digit = n % 10;
		n = n / 10;

	}
	cout << last_digit - new_digit;
	system("pause");
	return 0;

}


//score: 0.4/0.5
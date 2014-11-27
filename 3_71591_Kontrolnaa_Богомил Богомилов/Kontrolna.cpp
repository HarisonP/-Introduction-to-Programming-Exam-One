#include<iostream>
#include<cmath>
using namespace std;

/*
int main()
{
	int x = 0;
	cout << "X =  ";
	cin >> x;
	int y = 0;

	if (x <= 0)
	{
		y = pow(x, 3);
		cout << "The answer is :  " << y << endl;
		return 0;
	}
	else if (x > 0, x <= 8)
	{
		y = abs((x * 2) * 5 + 2 * pow(x, 4));
		cout << "The answer is :  " << y << endl;
		return 0;
	}

	if (x > 8, x <= 25)
	{

		if (x = 9, x = 16, x = 25)
		{
			y = sqrt(x);
			cout << "The answer is :  " << y << endl;
			return 0;
		}

		else if (x % 2 != 0)
		{
			y = x * pow(x, 2) - 1;
			cout << "The answer is :  " << y << endl;
			return 0;
		}

		else if (x % 2 == 0)
		{
			int last_digit = x % 10;
			y = last_digit * (x / 2);
			cout << "The answer is :  " << y << endl;
			return 0;
		}
	}

			else
		{
			cout << "X does not belong to the allowed values .. try again" << endl;
		}

	
	return 0;
} */


/*
int main()
{
	int x = 0;
	cout << "X =  ";
	cin >> x;
	int last_digit = x % 10;
	int first_digit = 0;

	while (x > 0)
	{
		x = x / 10;
		if (x > 0 & x < 10)
		{
			first_digit = x;
		}
	}

	cout << "Answer: " << last_digit - first_digit << endl;
	
	return 0;


}*/

int main()
{
	int x = 0;
	cout << "X =  ";
	cin >> x;
	int copy_x = x;
	int current = 0;
	int counter = 0;

	while (copy_x > 0)
	{
		current = copy_x % 10;
		if (current % 3 == 0)
		{
			x = x / (3 * (pow(10, counter)));

		}
		else if (current % 2 == 0)
		{
			x = x / (2 * (pow(10, counter)));

		}

		else
		{

			x = x - (2 * (pow(10, counter)));

		}
		copy_x /= 10;
		counter++;
	}

	cout << x << endl;
		return 0;
}















#include<iostream>
#include<cmath>
using namespace std;


int main1a()
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
	//what this comma , should mean? not what you expected... x > 0 && x <= 8 is what you expected
	// -0.2 points
	else if (x > 0, x <= 8)
	{
		// pow expects double
		// -0.1
		y = abs((x * 2) * 5 + 2 * pow(x, 4));
		cout << "The answer is :  " << y << endl;
		return 0;
	}
	//what this comma , should mean? not what you expected... x > 8 && x <= 25 is what you expected
	// repeatable error
	if (x > 8, x <= 25)
	{
		//oh god... any difference between == and = for you ? 
		// so comma is && or is ||?
		// -0.2 points
		if (x = 9, x = 16, x = 25)
		{
			// sqrt expects double
			// -0.1
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
}

//task1: 0.4/1.0

int main2a()
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

	// wunderbar!
	// 0.5/0.5
}

int main2b()
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
			// pow need double for first arg:
			//wait what???
			x = x / (3 * (pow(10.0, counter)));

		}
		else if (current % 2 == 0)
		{
			// pow need double for first arg:
			// why wloud you do this
			x = x / (2 * (pow(10.0, counter)));

		}

		else
		{
			// pow need double for first arg:
			//well no...
			x = x - (2 * (pow(10.0, counter)));

		}
		copy_x /= 10;
		counter++;
	}

	cout << x << endl;
		return 0;
}

// well i am giving you 0.3 for the loop and the the if else stucture 
// but the other stuffs are... well not ok :D

//task 2:
// score: 0.8/(1.5 + 0.5)

//final:  0.4 + 0.8 == 3.2









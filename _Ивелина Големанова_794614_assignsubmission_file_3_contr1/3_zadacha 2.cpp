#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, last_digit, first_digit, difference; // = something?
	cin >> number;

	last_digit = number % 10;

	while (number != 0)
	{
		number = number % 10;
		first_digit = number / 10;	
	}

	difference = last_digit - first_digit;


	int digit, new_number;
	while (number != 0)
	{
		//counter should be outside of the loop:
		// -0.2
		int counter;
		// =?
		// -0.1
		counter == 0;

		digit = number % 10;

		if (digit % 3 == 0)
		{
			digit = digit / 3;
		}

		else
		{
			if (digit % 2 == 0)
			{
				digit = digit / 2;
			}

			else
			{
				digit = digit + 2;
			}
		}

		++counter;
		number = number / 10;
		// new_number = new_number + 
		// -0.2
		new_number = number + digit * pow(10.0, counter);

	}

	cout << new_number << endl;

	
	return 0;

} 

//score: 1/ (1.5 + 0.5)
#include <iostream>
using namespace std;
int main()
{
	//int a, b, c or int a; int b; int c;
	// -0.1
	int number,
	int firstDigit = 0;
	int lastDigit = 0 ;
	int mult = 0 ;
	cin >> number ;
	lastDigit = number % 10;
	// != 0?
	// -0.1
	while (number == 0)
	{
		// not exactly
		// -0.1
		if (number / 10 != 0)
		{
			firstDigit = number / 10;
			number = firstDigit;
		
			break;
		}
		else
		{ 
			firstDigit = number;
		
			break;
		}
		number = number / 10;
	}
	mult = firstDigit * lastDigit;
		cout << mult << endl;
	system("PAUSE");
	return 0;
}

//score: 0.3 /1.5 + 0.5
#include <iostream>
using namespace std;
int main()
{
	int number,
	int firstDigit = 0;
	int lastDigit = 0 ;
	int mult = 0 ;
	cin >> number ;
	lastDigit = number % 10;
	while (number == 0)
	{
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
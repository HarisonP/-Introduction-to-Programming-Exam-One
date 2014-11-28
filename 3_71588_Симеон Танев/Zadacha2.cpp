#include <iostream>
using namespace std;

int numbers(int number)
{

	int last_digit = number % 10;
	int first_digit = 0;
	// this should be just number % 10 cause otherwise for you last digit of the numer are actually two digits
	// - 0.1
	while ((number / 10) % 10 != 0)
	{
		// this could be done smarter but you have tried to use funciont so 
		// -0.1 + 0.1 = no points lost here.
		first_digit = number;
		//number = number/10; otherwise the loop will never end
		// -0.1
	}

	cout << first_digit*last_digit << endl;
	return 0;
}
int main()
{
	int number;
	cin >> number;

	system("pause");
	return 0;
}

//score 0.3/(1.5 + 0.5) not good at all

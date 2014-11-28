#include <iostream>
#include <cmath>
using namespace std;
//your code has syntax errors.. why haven't you fixed them :(
//Error	4	error C2146: syntax error : missing ';' before identifier 'cout'	line 27
// -0.1

int main()
{
	int x;
	// function is better :) no sence to make something like func when you have auto-complete (ctrl + space)
	int func=0;
	cout << "Enter x: ";
	cin >> x;

	if (x <= 0)
	{
		func = pow(x, 3);
		cout << func;
		//return 0
	}
	else if (x > 0 && x <= 8)
	{
		// pow expects double
		// -0.1
		func = abs((x * 2) * 5 + 2 * pow(x, 4));
		cout << func;
		//return 0
	}
	else if (x > 8 && x <= 25)
	{
		if (x == 9 || x == 16 || x == 25)
		{
			// sqrt expects double
			// -0.1
			func = sqrt(x)
			cout << func;
			//return 0
		}
		else if(x % 2 != 0)
		{
			func = x * (x*x - 1);
			cout << func;
		}
		else if (x % 2 == 0)
		{
			func = ((x % 10) * (x / 2));
			cout << func;
			//return 0
		}
	}
	else if (x > 25)
	{
		cout << "x is not valid!";
		//return 0
	}
	cout << endl;

	//you does not stop you funciton when you shoud
	// -0.2
	return 0;
}

//score 0.5/1.0
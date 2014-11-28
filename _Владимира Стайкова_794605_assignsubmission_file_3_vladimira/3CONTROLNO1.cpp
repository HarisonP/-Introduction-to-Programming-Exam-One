#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n, last_digit;
	cin >> n;
	if (n <= 0)
	{
		n = n * n * n;
		cout << n << endl;
		return 0;
	
	}

	if (n > 0 && n <= 8)
	{
		n = abs((n * 2) * 5 + 2 * pow((double)n, 4));
			cout << n << endl;
			return 0;

	}
	
	if (n > 8 && n <= 25)
	{
		if (n == 9 || n == 16 || n == 25)
		{
			n = sqrt((double)n);
			cout << n << endl;
			return 0;
			
		}

		if (n % 2 != 0)
		{
			n = n * n - 1;

			cout << n << endl;
			return 0;
		}
		// else can be used here 
		
		if (n % 2 == 0)
		{
			last_digit = n % 10;
			n = last_digit * (n / 2);

			cout << n << endl;
			return 0;
			
		} 
		
		
		return 0;
	}
		if (n > 25)
		{
			cout << "Error" << endl;
			return 0;
		}
		
		
		return 0;
	
}
//the task is ok but you don't really like else statments do you?
// -0.1

//score: 0.9/1.0
#include <iostream>
using namespace std;

int difference(int n)
{
	int last_digit = n % 10;
	int first_digit=0;
	

	for (int i = 0; i <= n; ++i)
	{
		
		first_digit = n % 10;
		n /= 10;

		
	}
	return first_digit - last_digit;
	
}

int change_numbers(int number)
{
	int new_number = 0;
	int digit=0;
	for (int i = 0; i <= 10 ; ++i)
	{
		digit = number % 10;
		number /= 10;
		if (digit % 3 == 0)
		{
			digit /= 3;
		}
		else if ((digit % 3 != 0) && (digit % 2 == 0))
		{
			digit /= 2;
		}
		else
		{
			digit += 2;
		}
		digit *= pow(10, i);
		new_number += digit;
	}
	return new_number;
}

int main()
{
	int x;
	cin >> x;
	int diff;
	diff = difference(x);
	cout << diff << endl;
	int new_num;
	new_num = change_numbers(x);
	cout << new_num << endl;

	if (x > new_num)
	{
		cout << x;
	}
	else
	{
		cout << new_num;
	}
	cout << endl;
	system("pause");
	return 0;
}
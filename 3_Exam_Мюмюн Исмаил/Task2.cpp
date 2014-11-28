#include <iostream>
#include <cmath>

using namespace std;
//nicee
int product(int x)
{
	int last_digit = x % 10;
	int copy = x;
	int size = 0;
	int number[100] = { 0 };
	int result;

	while (copy > 0)
	{
		number[size] = copy % 10;
		copy /= 10;
		size++;
	}

	result = number[size - 1] * last_digit;
	
	return result;
}
//cool
int change(int x)
{
	int copy = x;
	int result = 0;
	int counter = 0;
	int last_digit;

	while (copy > 0)
	{
		last_digit = copy % 10;

		if (last_digit % 3 == 0)
		{
			last_digit /= 3;
		}
		else if (last_digit % 2 == 0)
		{
			last_digit /= 2;
		}
		else
		{
			last_digit += 2;
		}

		result += last_digit * pow(10.0, counter);
		copy /= 10;
		counter++;
	}

	return result;

}
//wunderbar
int reverse(int x)
{
	int size = 0;
	int result = 0;
	int reversed[100] = { 0 };
	int last_digit;
	while (x > 0)
	{
		last_digit = x % 10;
		reversed[size] = last_digit;
		size++;
		x /= 10;
	}

	int power = size - 1;

	for (int i = 0; i < size; i++)
	{
		result += reversed[i] * pow(10.0, power);
		power--;
	}

	return result;

}

int compare(int a, int b)
{
	int bigger = a;
	if (a < b)
	{
		bigger = b;
	}
	//this cloud be just a < b ? return b : return
	return bigger;
}

int main(){

	int x;
	// you probably cloud think of better names right :) usually first_xxx, second_xxx are not good names,
	// cause actually then don't tell us something. This cloud be product_first_last_digits and changed_number  (reversed is ok) 
	int first_result = 0;
	int second_result = 0;
	cin >> x;

	int reversed = reverse(x);

	first_result = product(x);
	second_result = change(x);
	// you should comapere actually second result with recersed
	// -0.1
	cout << first_result << ' ' << second_result << ' ' << compare(x, reversed) << endl;
	system("pause");
	return 0;
}
// clean good , good functions 
// + 0.1

//score 2.0/(1.5 + 0.5)
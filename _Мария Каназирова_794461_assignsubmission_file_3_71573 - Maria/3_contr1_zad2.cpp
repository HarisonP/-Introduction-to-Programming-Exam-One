#include<iostream>
#include<cmath>
using namespace std;
int first_last(int x)
{
	int counter = 0;
	int copy_x = x;

	while (copy_x)
	{
		counter++;
		copy_x /= 10;
	}

	copy_x = x;
	int last_digit = copy_x % 10;
	int first_digit = copy_x / (int) pow(10.0,(double) counter - 1);

	return first_digit * last_digit;

}
int function_b(int b)
{
	int counter = 0;
	int new_b = 0;
	int copy_b = b;

	while (copy_b)
	{
		counter++;
		copy_b /= 10;
	}

	copy_b = b;

	for (int i = 0; i < counter; i++)
	{
		new_b *= 10;
		if (copy_b % 10 % 3 == 0)
		{
			new_b += (copy_b % 10) / 3;
			copy_b /= 10;
 		}
		if (copy_b % 3 != 0 && copy_b % 2 == 0)
		{
			new_b += (copy_b % 10) /2;
			copy_b /= 10;
		}
		if (copy_b % 3 != 0 && copy_b % 2 == 1)
		{
			new_b += (copy_b % 10) +2;
			copy_b /= 10;
		}
	}

	return new_b;
}


int reverse(int x)
{
   int copy2_x = x;
   int reverse = 0;
   while (copy2_x)
   {
	   reverse *= 10;
	   reverse += copy2_x % 10;
	   copy2_x /= 10;
   }

   if (x > reverse)
   {
	   return x;
   }
   else
   {
	   return reverse;

   }
}
int main()
{
	int x;
	cin >> x;
	cout << first_last(x) << endl;
	cout << function_b(x) << endl;
	cout << reverse(x) << endl;

	system("pause");
	return 0;
}
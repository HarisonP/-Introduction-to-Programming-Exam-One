#include<iostream>
using namespace std;

int difference(int x)
{
	// x must be a constants
	// -0.3
	int a[x];
	int y = 0, k = x % 10, u = x;
	// nope
	// - 0.2
	for (int i = 0; i < x; i++)

	{
		u = u % 10;
	}
	y = k - u;
	return y;
}

float stuff(int x)
{
	int y = 0;
	// what??? you can't do this... a has not the digits of x....
	// -0.3
	int a[x];
	int k = 0;
	for (int i = 0; i < x; i++)
	{
		if (a[i] % 3 == 0)
		{
			a[i] = a[i] / 3;
		}
		else if (a[i] % 2 == 0)
		{
			a[i] = a[i] / 2;
		}
		if (a[i] % 2 == 1)
		{
			a[i] = a[i] + 2;
		}
		y = y + a[i] * pow(10, k);
		k++;
	}
	return y;
}

int compare(int x)
{
	int y = 0;
	int a[x], b[x];
	// oh god... still no
	// -0.2
	int k = 0, u = x, o = x;
	//wrong lop
	// -0.2
	for (int i = 0; i < x; i++)
	{
		a[i] = u % 10;
		u = u / 10;
		b[i] = a[i];
		y = y + b[i] * pow(10, o);
		o--;

	}
	if (x > y)
	{
		return 1;
	}
	if (y > x)
	{
		return 0;
	}
	if (y == x)
	{
		return 2;
	}
}

int main()
{
	int x = 0;
	cout << "x = ";
	cin >> x;
	cout << "The difference between x's last digit and x's first digit is: " << difference(x)<<endl;
	cout << "The modified x is: " << stuff(x) << endl;
	// awlays true:
	// -0.2
	if (compare(x))
	{
		cout << "x is bigger than x with swapped digits" << endl;
	}
	else if (compare(x) == 0)
	{
		cout << "x is smaller than x with swapped digits" << endl;
	}
	else
	{
		cout << "x is equal to x with swapped digits" << endl;
	}
}

//score: 0.6/1.5 + 0.5 
// wtf dude....
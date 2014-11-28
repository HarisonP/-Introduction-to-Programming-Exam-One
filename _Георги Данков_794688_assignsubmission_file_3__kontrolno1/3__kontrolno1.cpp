//zad_1 
/*
#include<iostream>
//#include<cmath>
using namespace std;

//well this is an overkill :D
int square_root(int p)
{
	// sqrt expects double
	//- 0.1
	return sqrt(p);
}

// this is ok :)
int last_digit(int n)
{
	return n % 10;

}
int main1()
{
	int x;// = something wloud be better
	cin >> x;
	if (x <= 0)
	{
		cout << x * x * x << endl;
	}
	else if (x > 0 && x <= 8)
	{
		//pow expects double x
		// -0.1
		cout << abs((x * 2) * 5 + 2 * (pow(x, 4))) << endl;
	}
	else if (x > 8 && x <= 25)
	{
		if (x == 9 || x == 16 || x == 25)
		{
			cout << square_root(x) << endl;
		}
		else if (x % 2 != 0)
		{
			cout << x*(x*x - 1) << endl;
		}
		else if (x % 2 == 0)
		{
			cout << (last_digit(x))*(x / 2);
		}
	}
	else
	{
		cout << "Error" << endl;
	}

	system("pause");
	return 0;
}
//score: 0.8/1.0
*/

//zad_2
// ugly code duuudeee.....
// :X :X :X
/*
#include<iostream>
using namespace std;

int difference(int n)
{
int n_copy = n;
int last_digit = n % 10;
//good
while (n_copy > 9)
{
n_copy /= 10;
}
return n_copy - last_digit;
}
//the name is nice, but actually not very good :D
int some_stuff_b(int p)
{
int last_digit = 0;  
int p_copy = 0;
int i = 0;
while (p > 0)
{
last_digit = p % 10;
if (last_digit % 3 == 0)
{
last_digit /= 3;
p_copy = p_copy + last_digit*pow(10.0, i);
}
else if (last_digit % 2 == 0)
{
last_digit /= 2;
p_copy = p_copy + last_digit*pow(10.0, i);
}
else if (last_digit % 2 != 0)
{
last_digit += 2;
p_copy = p_copy + last_digit*pow(10.0, i);
}
// p_copy = p_copy + last_digit*pow(10.0, i); cloud be once here :)
i++;
p /= 10;
}
return p_copy;
}

int main()
{
int x;
cin >> x;
cout << difference(x) << endl;
cout << some_stuff_b(x) << endl;

system("pause");
return 0;
}
// good but your code is too ugly and some names are not really ok
// -0.1

// score : 1.4/1.5 + 0.5
*/



//zad_3

#include<iostream>
using namespace std;
// union is the word you were looking for :)
int obedinenie(int a[], int b[])
{
	//magic constants :(
	for (int i = 0; i < 4; i++)
	{
		int j = 0;
		// this prints a[i] a lot of times
		// - 0.3
		while (a[i] != a[j])
		{
			cout << a[i] << endl;
			j++;
		}
	}
	// no return 
	// -0.2
}

int main()
{
	int arr[4];
	int size = 4;
	int barr[4];
	cout << "arr:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "barr:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> barr[i];
	}
	cout << obedinenie(arr, barr) << endl;

	system("pause");
	return 0;

}
//score 0.25/ (1.5 + 0.5)
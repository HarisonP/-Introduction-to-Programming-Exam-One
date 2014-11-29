#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int a)
{
	int counter = 0;
	int copy_a = a;
	//this could be done better:
	// a lot better
	// -0.1
	while (copy_a)
	{
		counter++;
		copy_a /= 10;
	}
	copy_a = a;

	int sum = 0;

	for (int i = 0; i < counter; i++)
	{
		// pow need double
		// -0.2
		sum += (int) pow(copy_a % 10, 3);
		copy_a /= 10;
	}
	// return sum == a is better
	if (sum == a)
	{
		return  true;
	}
	else
	{
		return false;
	}

}
bool odd(int b)
{
	//return  b%2==0 is better
	if (b % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int x[10] = { 0 };
	int y[10] = { 0 };
	int size = 10;
	int size2 = 10;
for (int i = 0; i < size; i++)
	{
		cin >> x[i];
	}
	
	for (int i = 0; i < size2; i++)
	{
		cin >> y[i];
	}
	
	
	int n = 0;
	if (size - size2 >= 0)
	{
		n = size;
	}
	else
	{
		n = size2;
	}

	// I didn't know how to put it in a function
	// don't worry :)
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x[i] == y[j])
			{
				cout << x[i] << " is contained in both" << " ";

			}
		}
		cout << endl;
	}

	// nope :)
	// - 0.5
	for (int i = 0; i < size2; i++)
	{
		if (odd(y[i]))
		{
			cout << y[i] << " is odd." << " ";
		}
		cout << endl;
	}


	
	
	for (int i = 0; i < n; i++)
	{
		if (armstrong(y[i]))
		{
			cout << y[i] << " is a number of Armstrong." << " " ;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

// score: 1.2/1.5 + 0.5
#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int a)
{
	int counter = 0;
	int copy_a = a;

	while (copy_a)
	{
		counter++;
		copy_a /= 10;
	}
	copy_a = a;

	int sum = 0;
	
	for (int i = 0; i < counter; i++)
	{
		sum += (int) pow(copy_a % 10, 3);
		copy_a /= 10;
	}

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
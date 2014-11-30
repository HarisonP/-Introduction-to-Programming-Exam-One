#include<iostream>
#include<cmath>
using namespace std;

int f0(int x)
{
	int y = 0;
	// pow expects double
	// -0.2
	y = pow(x, 3);
	return y;
}

int f1(int x)
{
	int y = 0;
	// pow expects double
	y = abs((x * 2) * 5 + 2 * pow(x, 4));
	return y;
}

float f2_0(int x)
{
	int y = 0;
	y = sqrt(x);
	return y;
}

int f2_1(int x)
{
	int y = 0;
	// pow expects double
	y = x*(pow(x, 2) - 1);
	return y;
}

int f2_2(int x)
{
	int y = 0;
	y = (x % 10)*(x / 2);
}


int main()
{
	int x = 0;
	cout << "x = ";
	cin >> x;
	if (x <= 0)
	{
		cout<<"y = "<<f0(x);
	}
	if (x > 0 && x <= 8)
	{
		cout << "y = " << f1(x);
	}
	if (x > 8 && x <= 25)
	{
		//whaat?? well no :D % 1 == 0 awlays 
		// sqrt expects double
		// -0.2
		if (sqrt(x) % 1 != 0)
		{
			cout << "y = " << f2_0(x);
		}
		else if (x % 2 == 1)
		{
			cout << "y = " << f2_1(x);
		}
		else
		{
			cout << "y = " << f2_2(x);
		}
	}
	if (x > 25)
	{
		cout << "x can only be in (-inf,25]";
	}
	//return 0??
}

//score 0.6/1.0
#include<iostream>
#include<cmath>
using namespace std;


int find_number(int x){
	int last_digit = x % 10;
		if (x<=0)
		{
			x = x ^ 3;
			cout << x << endl;
			
		}
		if (x>0 && x <= 8)
		{
			x= abs(x * 2 * 5 + 2 * x ^ 4);
			cout << x << endl;
		}
		if (x==9 || x==16 || x==25)
		{
			// sqrt expects double
			// -0.1	
			x=sqrt(x);
			cout << x << endl;
		}
		if (x > 8 && x <= 25 && x % 2 != 0)
		{
			x = x * (x ^ 2 - 1);
			cout << x << endl;
		}
		if (x > 8 && x <= 25 && x % 2 == 0)
		{
			x= last_digit * (x / 2);
			cout << x << endl;
		}
		if (x > 25)
		{
			cout << "Error" << endl;
		}
		return x;
		
	}
	// no else statments 
	// -0.2
	int main()
	{
		int n;
		cin >> n;
		cout << find_number(n) << endl;
		system("pause");
		return 0;
	}

	// score 0.7 /1.0
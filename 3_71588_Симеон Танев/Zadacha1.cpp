#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int functionX = 0;
	int x = 0;

	cin >> x;

	if (x <= 39)
	{
		if (x <= 0)
		{
			functionX = (abs(double(x) + 2));
		}

		if (x > 0 && x <= 12)
		{
			// here you make integer equal to double and you could lose data. 
			functionX = (pow(double(x), 4) + x * 2 + 333);
		}
		// x is for sure <= 39 if you are here
		if (x > 12 && x <= 39)
		{
			//your laziness is so cool: this should be x==16 || x == 25 || x==36
			// - 0.2 points
			if ( x == 16 || 25 || 36)
			{
				// here you make integer equal to double and you could lose data. 
				functionX = sqrt(double(x));
			}
			if (x % 2 != 0 && x != 16 || 25 || 36)
			{
				// here you make integer equal to double and you could lose data. 
				functionX = (x*x*(x - 1)*(x + 1));
			}
			//your laziness is so cool: this should be x==16 || x == 25 || x==36
			// no points lost cause it is an repeatable error
			if (x % 2 == 0 && x != 16 || 25 || 36)
			{
				functionX = (int(x % 10)*(x / 2 - 6));
			}
		}
		cout << functionX << endl;
	}
	else
	{
		cout << "X is not within the...allowed...?numbers" << endl;
	}
	system("pause");
	return 0;
}
// socre: 0.8/1.0 points;
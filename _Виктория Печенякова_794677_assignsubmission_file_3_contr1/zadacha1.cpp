#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// ugly names...
	int v;
	int t;
	int f;

	cin >> v;
	{
		if (v < 0)
		{

			f = v*v*v;
		}
		else if (0 < v <= 8)

		{
			// no abs
			// -0.2
			f = (v * 2) * 5 + 2 * v*v*v*v;

		}
		else if (8 < v <= 25)
		{
			// sqrt expects double
			// -0.2
			// if (v % 2 == 0) else???
			// -0.2
			f = sqrt(v);
		}
		else if (v > 25)
		{
			// this is not an error message??
			// -0.1
			f = 0;

		}

		cout << "f(v)= " << f;
	}


	system("pause");
	return 0;
}

//score 0.3/1.0
//baad...
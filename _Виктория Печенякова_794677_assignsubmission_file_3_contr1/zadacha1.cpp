#include <iostream>
#include <cmath>
using namespace std;

int main()
{
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
			f = (v * 2) * 5 + 2 * v*v*v*v;

		}
		else if (8 < v <= 25)
		{
			f = sqrt(v);
		}
		else if (v > 25)
		{

			f = 0;

		}

		cout << "f(v)= " << f;
	}


	system("pause");
	return 0;
}
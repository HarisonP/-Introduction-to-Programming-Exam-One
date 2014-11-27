#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int v, first_symbol, last_symbol, razlika;
	cin >> v;

	if (v != 0)
	{
		last_symbol = v % 10;
		first_symbol = v / 10;
		while (first_symbol > 9)
		{
			first_symbol = first_symbol / 10;

		}

		razlika = first_symbol - last_symbol;

	}


	cout << "Razlikata na purvata i poslednata cifra e : " << razlika;

	system("pause");
	return 0;
}

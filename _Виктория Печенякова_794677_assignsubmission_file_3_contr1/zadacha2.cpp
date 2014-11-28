#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	// razlika is not ok.... :D
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
//score 0.5/(1.5 + 0.5)
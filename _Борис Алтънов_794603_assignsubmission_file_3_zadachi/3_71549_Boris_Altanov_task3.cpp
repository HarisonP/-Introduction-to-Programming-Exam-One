#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool division(int number)
{
	if (number % 7 == 0 || number % 5 == 0)
	{
		if ((number > 5) && (number % 5 == 0))
		return division(number / 5);
		else if ((number > 7) && (number % 7 == 0))
		return division(number / 7);
		else return 0;
	}
	if (number % 7 != 0 || number % 5 != 0)
		return 1;
}


int main()
{
	int number = 0;
	cin >> number;
	if ((int)division(number) == 0)
	{
		cout << "True" << endl;
	}
	else if ((int)division(number) == 1)
	{
		cout << "False" << endl;
	}
	
	system("pause");
	return 0;
}



//0.6/0.8
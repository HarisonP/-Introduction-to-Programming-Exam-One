#include <iostream>
using namespace std;

int numbers(int number)
{

	int last_digit = number % 10;
	int first_digit = 0;

	while ((number / 10) % 10 != 0)
	{
		first_digit = number;
	}
	cout << first_digit*last_digit << endl;
	return 0;
}
int main2()
{
	int number;
	cin >> number;
	system("pause");
	return 0;
}
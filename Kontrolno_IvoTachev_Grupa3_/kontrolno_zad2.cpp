#include <iostream>

using namespace std;

int last_x_first(int user_number)
{
	int last_digit = 0, first_digit = 0 ;
	first_digit = user_number ;
	last_digit = user_number % 10 ;
	while ( first_digit / 10 > 0 )
	{
		first_digit = first_digit / 10 ;
	}
	return first_digit * last_digit ;
}

int main()
{
	int number = 0;
	cout << "Vuvedete chisloto si : ";
	cin >> number ;
	cout <<"Proizvedenieto na pyrvata i poslednata cifra e:" <<last_x_first(number) << endl ;
	system("pause");
	return 0;
}
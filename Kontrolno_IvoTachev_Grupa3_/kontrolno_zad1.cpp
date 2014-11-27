#include <iostream>
#include <cmath>

using namespace std;

bool is_number_odd(int number)
{
	if ( number % 2 == 0)
	{
		return false;
	}
		return true;
}

int main()
{
	int x = 0 , y = 0 ;
	cout << "Vyvedete x:" ;
	cin >> x ;
	if ( x <= 0 )
	{
		y = abs(x + 2) ;
	}
	else if ( x > 0 && x <= 12)
	{
		y = x * x * x * x + 2 * x + 333 ;
	}
	else if (x > 12 && x <= 39)
	{
		if(x == 16)
		{
			y = 4 ;
		}
		else if ( x == 25 )
		{
			y = 5 ;
		}
		else if ( x == 36 )
		{
			y = 6 ;
		}
		else if(is_number_odd(x) && x != 25)
		{
			y = x * x * (x + 1) * (x - 1) ;
		}
		else if (!(is_number_odd(x)) && x != 16 && x != 36) 
		{
			y = (x % 10) * ( x/2 - 6 ) ;
		}
	}
	if ( x > 39 )
	{
		cout << " x ne e v dopustimite stoinosti" ;
	}
	else 
	{
		cout << " f(x) =" << y ;
	}
	system("pause") ;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;

		if ( x < 0 )
		{
			x = abs( x + 2 );
			cout << x << endl;
		}
		else if ( x > 0 && x <= 12 )
		{
			// x^ 4 hahah nope.
			// -0.2
			x = x ^ 4 + 2 * x + 333;
			cout << x << endl;
		}
		else if ( x > 12 && x <= 39 )
		{
			//sqrt == 0?? 
			// -0.1
			// sqrt needs double
			// -0.1
			if ( sqrt ( x ) == 0 )
			{
				cout << sqrt( x ) << endl ;
				
			}
			else if ( sqrt ( x ) != 0 )
			{ 
			 if ( x % 2 != 0 )
			{
				// ^ .. repeatle error
				x = x ^ 2 * ( x - 1 )*( x + 1 );
				cout << x << endl;
			}
			 else if  (x % 2 == 0)
			 {
				 x = (x % 10) * (x / 2 - 6);
				 cout << x << endl;
			 }
			}
		}
		else (x > 39) ;
		 {
			cout << "unavailable funcition for x > 39 ";
		 }

	system("PAUSE");
	return 0;
	
}

//score: 0.6/ 1.0
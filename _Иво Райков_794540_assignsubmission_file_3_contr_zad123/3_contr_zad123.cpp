
//zad1
/*
#include<iostream>
#include<cmath>
using namespace std;

int funct;
//bad names  :)
int function_1(int n)
{
	funct = abs(n + 2);
	return funct;
}
int function_2(int n) 
{

	funct = pow( (double)n, 4) + 2 * n + 333;
	return funct;
}
int function_3(int n)  
{
  int last_digit = n % 10;

        for (int i = 1; i <= n; i++)
        {
			//sqrt expects double:
			// -0.1
             if ( i * i == n) funct = sqrt(n);  // ili funct = i;
			 // you should return here :)
			 // -0.1
			 // creative solution 
			 // + 0.1
        }
		// pow expects double && not good math expression
		// - 0.2
	    if (n % 2 != 0) funct = pow(n, 2 * (n - 1) * (n - 2));
	    else if (n % 2 == 0) funct = last_digit * ((n / 2) - 6);
		    return funct;
}

int main()
{
	int x;
	cout << "x=";
	cin >> x;
	if (x <= 0) cout << function_1(x) << endl ;
	else if (x > 0 && x <= 12) cout << function_2(x) << endl;
	else   cout << function_3(x) << endl;
	system("pause");
	return 0;
}

//score: 0.7/1.0 */

//zad2

#include<iostream>
#include<cmath>
using namespace std;
/*
int product( int n)
{
	int first_digit;
	int last_digit = n % 10;
	while (n >= 9)
	{
		n /= 10;
		first_digit = n;
	}
	return first_digit * last_digit;
}

int main()
{
	int x;
	cin >> x;
	cout << product(x) << endl;
	system("pause");
	return 0;
}
//score 0.5/(1.5 + 0.5) */


//zad3
/*
#include<iostream>
using namespace std;

int a_arr[20], b_arr[20];

void input (int p, int q)
{
	for (int i = 0; i < p; i++)
	{
		cin >> a_arr[i];
	}
	for (int j = 0; j < q; j++)
	{
		cin >> b_arr[j];
	}
}

int sum(int p, int q)
{
	// use {}. trust me it's safer with them
	for (int i = 0; i < p; i++)
		for (int j = 0; j < q; j++)
			// so close. may be if return was cout, cause return breaks the function(and the loop obviously)
			// -0.4
			if (a_arr[i] == b_arr[j]) return a_arr[i];
}
int substraction(int p, int q)
{
	// use {}. trust me it's safer with them
	for (int i = 0; i < p; i++)
		for (int j = 0; j < q; j++)
			// so close. may be if return was cout, cause return breaks the function(and the loop obviously)
			//repeatable error
			if (b_arr[j] != a_arr[i] && b_arr[j] %2==0) return b_arr[j];
}

int main()
{	
	int n, m;
	cout << "broy na el 1vi masiv"; cin >> n;
	cout << "broy na el 2ri masiv"; cin >> m;
	input(n, m);
	cout << "sechenieto e " << sum(n, m) << endl;
	cout << "razlikata e " <<substraction(n, m) << endl;
	system("pause");
	return 0;
}

//score: 1.1/(1.5 + 0.5)
*/

#include<iostream>

using namespace std;

int recurse(int p)
{
	if (p == 1)
	{
		return 1;
	}
	if (p % 2 == 0)
	{
		recurse(p / 2);
	}
	else if (p % 3 == 0)
	{
		recurse(p / 3);
	}
	else return 0;
}

int main()
{
	int a=0;
	int p = a;

	cout << "vavedete 4islo: "; cin >> a;

	if (recurse(p) == 1)
	{
		cout << endl << "true";
	}
	else cout << endl << "false";
}

//0.8/0.8
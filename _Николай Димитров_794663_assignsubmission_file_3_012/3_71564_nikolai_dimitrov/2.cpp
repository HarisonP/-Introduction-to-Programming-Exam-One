//zabravil s1m specifi4nite za string ne6ta..
// nema se  pla6i6

#include<iostream>
#include<string>
using namespace std;

int count(string a)
{
	for (int i = 0, i < str.length(s), i++)
	{
		if (s[i] == " ")
		{
			w++;
		}
	}
	return w;
}

int main()
{
	string a;
	string b;

	cout << "vavedete dumi";
	cin.getline(s);

	int w = 0,o = 0;

	cout << "broq dumi e" << count(a);

	o = w;

	char b[o][10];
	char c[o][10];

	for (int i = 0, i < o, i++)
	{
		for (int j = 0, j < 10, j++)
		{
			b[i][j] = '.';
		}
	}
	
	for (int i = 0, i < o, i++)
	{
		for (int j = 0, j < 10, j++)
		{
			c[i][j] = b[i][10 - j];
		}
	}

	cout << "ne6toto s ob1rnatite dumi e: ";
	for (int i = 0, i < o, i++)
	{
		for (int j = 0, j < 10, j++)
		{
			if (c[i][j] != '.')
			{
				cout << c[i][j];
				if (j == 0)
				{
					cout << " ";
				}
			}
			
		}
	}
	
	return 0;
}
//1 / 2.2
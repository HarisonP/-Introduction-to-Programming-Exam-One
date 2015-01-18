#include<iostream>
using namespace std;
int main()
{
	char str[30];
	int counter = 1;
	for (int i = 0; i < 30; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < 30; i++)
	{
		if (str[i] == ' ')
		{
			counter++;
		}

	}
	cout << counter;
	return 0;
}
// 0.4/0.5
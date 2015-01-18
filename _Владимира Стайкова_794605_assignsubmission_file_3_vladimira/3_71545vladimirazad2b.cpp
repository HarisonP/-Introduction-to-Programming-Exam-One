#include<iostream>
using namespace std;
int main()
{
	int j = 0;
	char str[30];
	char reverse[30];
	for (int i = 0; i < 30; i++)
	{
		cin >> str[i];
	}
	for (int i = 9; i >= 0; i--)
	{
		str[i] = reverse[j];
		j++;
	}
	reverse[10] = '\0';
	for (int i = 0; i < 9; i++)
	{
		cout << reverse[i];
	}
	cout << endl;
	
	return 0;
}
// 0.3 / 1.0
#include <iostream>
using namespace std;

int main1()
{
	int m;
	cin >> m;
	const int n = m;
	int MArray[n][n];
	int i=0;
	int j=0;
	for (i = (n - 1); i < n; i--)
	{
		for (j = i; j < n; j--)
		{
			i =! 0;
		}
		
	}
	int sum = i + j;
	cout << sum << endl;
	
	system("pause");
	return 0;
}

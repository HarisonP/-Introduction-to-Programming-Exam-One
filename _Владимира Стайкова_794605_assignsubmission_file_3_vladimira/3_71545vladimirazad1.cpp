#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				sum += arr[i][j];
			}

		}
		cout << sum;
		return 0;
	}
}

//0.3/0.7

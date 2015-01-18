#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	int el1, el2, el3;

	int arr[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	el1 = arr[0][0];
	for (int i = 0; i < 5; i += 2)
	{
		for (int j = 0; j < 5; j++)
		{
			if (el1 < arr[i][j])
			{
				el1 = arr[i][j];
			}
		}
	}

	cout << el1;
	return 0;
}

// 0.4/ 0.7

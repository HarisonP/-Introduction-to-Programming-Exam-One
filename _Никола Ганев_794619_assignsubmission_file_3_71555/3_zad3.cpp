#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int arr_1[10];
	int arr_2[10];
	bool same;
	for (int i = 0; i < 10; i++) // declaration
	{
		cin >> arr_1[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> arr_2[i];
	}

	for (int i = 0; i < 10; i++) // a)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr_1[i] == arr_2[j])
			{
				same = false;
			}
		}
		if (same)
		{
			cout << arr_1[i];
		}
		same = true;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr_2[i];
	}
	// a) end
	cout << endl;
	// b) 
	for (int i = 0; i < 10; i++)
	{
		if (arr_1[i] % 13 != 0)
		{
			cout << arr_1[i];
		}
	}
	// end b)
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	
	int ar1[10] = { 0 };
	int size = 10;

	for (int i = 0; i < size; i++)
	{
		cout << " ar1[ " << i << " ]= ";
		cin >> ar1[i];

	}

	cout << endl;

	int ar2[10] = { 0 };
	int size2 = 10;

	for (int i = 0; i < size; i++)
	{
		cout << " ar2[ " << i << " ]= ";
		cin >> ar2[i];

	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ar1[i] == ar2[j])
			{
				cout << ar1[i] << " ";
			}

		}
	}

	
	
	/*
	int ar1[10] = { 0 };
	int size = 10;

	for (int i = 0; i < size; i++)
	{
		cout << " ar1[ " << i << " ]= ";
		cin >> ar1[i];

	}

	cout << endl;
	
	int ar2[10] = { 0 };
	int size2 = 10;

	for (int i = 0; i < size; i++)
	{
		cout << " ar2[ " << i << " ]= ";
		cin >> ar2[i];

	}


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			// == needed
			if (ar1[i] = ar2[j])
			{
				cout << ar1[i];

			}

		}
	}

	*/
	// you have pasted this thing 2 times... 
	// from where have you copied it? :)
	system("pause");
	return 0;
}

//score: 0.75/ (1.5 + 0.5)
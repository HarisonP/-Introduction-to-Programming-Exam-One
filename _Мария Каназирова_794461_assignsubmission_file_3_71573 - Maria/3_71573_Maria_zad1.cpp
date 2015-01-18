#include<iostream>
#include<conio.h>

using namespace std;
// 127
int main()
{
	int num = 0;
	cin >> num;

	const int N = num;
	int matrix[21][21];


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// sum

	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = N; j < i; j++)
		{
			if (j >= i)
			{
				sum += matrix[i][j];
			}
		}
	}

	cout << "The sum is: " << sum << endl;



	// recently


	int best_elem;
	int counter = 1;
	int best_counter = 1;

	for (int i = 0; i < N; i++)
	{			
			for (int j = 0; j < N; j++)
			{
				int elem = matrix[i][j];
				if (elem == matrix[i+1][j+1])
				{
					counter++;
				}
				if (counter > best_counter)
				{
					best_counter = counter;
					best_elem = elem;
				}

				if (best_elem == elem && elem > best_elem)
				{
					best_elem = elem;
				}
				else
				{
					counter = 1;
				}
			}

		}
	

	cout << "The most recent element is: " << best_elem << endl;
	_getch();
	return 0;
}

//1/2
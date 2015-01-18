#include <iostream>
#include <cmath>

using namespace std;
int sum_diagonal(int n, int A[][3])
{
	int current_sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j >= n)
			{
				current_sum = current_sum + A[i][j];
			}
		}
	}
	return current_sum;
}

void smallest_number(int n, int A[][3])
{
	int first_smallest_number = A[1][0];
	int second_smallest_number = A[1][0];
	int third_smallest_number = A[1][0];
	for (int i = 1; i < n; i = i + 2)
	{
		for (int j = 0; j < n; j++)
		{
			if (first_smallest_number > A[i][j])
			{
				first_smallest_number = A[i][j];
			}
		}
	}
	for (int i = 1; i < n; i = i + 2)
	{
		for (int j = 0; j < n; j++)
		{
			if (second_smallest_number > A[i][j] && second_smallest_number != first_smallest_number)
			{
				second_smallest_number = A[i][j];
			}
		}
	}
	for (int i = 1; i < n; i = i + 2)
	{
		for (int j = 0; j < n; j++)
		{
			if (third_smallest_number > A[i][j] && third_smallest_number != second_smallest_number)
			{
				third_smallest_number = A[i][j];
			}
		}
	}
}

int main()
{
	const int n = 3 ; 
	int rows = n, columns = n;
	int A[n][n];
	cout << "\n Insert your matrix's elemnts: \n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << "a" << i << j << "=";
			cin >> A[i][j];
		}
	}
	cout << "The sum is :" << sum_diagonal(n, A) << endl;
	smallest_number(n, A);
	cout << "The three smallest numbers are:";
	system("pause");
	return 0;
}

// 1.5/2.0
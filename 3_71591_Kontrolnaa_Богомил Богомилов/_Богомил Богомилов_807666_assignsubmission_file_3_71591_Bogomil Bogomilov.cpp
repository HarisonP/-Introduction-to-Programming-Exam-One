#include <iostream>
using namespace std;

int main()
{

	const int N = 4;
	int matrix[N][N];
	int sum = 0;
	int max1 = 0;
	int max2 = 0;
	int max3 = 0;


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "matrix[" << i << "][" << j << "]= ";
			cin >> matrix[N][N];
			if (i + j < N - 1)
			{
				sum += matrix[N][N];
			}

		}
	}

	for (int i = 0; i < N; i += 2)
	{
		for (int j = 0; j < N; j++)
		{
			if (max1 < matrix[N][N])
			{
				max1 = matrix[N][N];
			}
		}
	}
	for (int i = 0; i < N; i += 2)
	{
		for (int j = 0; j < N; j++)
		{

			if (max2 < matrix[N][N] && max2 < max1)
			{
				max2 = matrix[N][N];
				
			}
		}
	}
	for (int i = 0; i < N; i += 2)
	{
		for (int j = 0; j < N; j++)
		{
			if (max3 < matrix[N][N] && max2 < max3)
			{
				max3 = matrix[N][N];
			}
		}
	}
				
	
	cout << "Sum above secondary diagonal = " << sum << endl;
	cout << "max1, max2 and max3 = " << max1 << ", " << max2 << ", " << max3 << endl;

	system("pause");
	return 0;

}

//1.5 /2 
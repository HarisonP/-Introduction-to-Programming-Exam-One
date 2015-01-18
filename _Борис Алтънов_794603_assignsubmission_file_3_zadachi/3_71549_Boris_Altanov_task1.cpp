#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int const N = 4;

//not finished
/*void input_matrix(int matrix[N][N])
{
	int dimention = 0;
	cin >> dimention;
	if (dimention <= 2 || dimention >= 20)
	{
		cout << "Bad input!";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> matrix[i][j];
			}
	}
}*/

int sum_below_reverse_diagonal(int matrix[N][N]) 
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = N-(i+1); j < N ; j++)
		{
			if (j >= i)
			{
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

//not finished
/*int odd_rows(int matrix1[N][N])
{
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			
			min = matrix1[i][j];
			if (i % 2 == 1)
			{
				if (min > matrix1[i][j])
				{
					min = matrix1[i][j];
				}
			}
		}
	}
	return min;
}*/


int main()
{
	int matrix[N][N] = {
			{1,2,3,4},
			{5,6,7,8},
			{9,1,2,3},
			{4,5,6,7}
	};


	cout << "The sum below reverse diagonal is: " <<sum_below_reverse_diagonal(matrix) << endl;
	//cout << odd_rows(matrix) << endl;




	system("pause");
	return 0;
}

// 1/2 points
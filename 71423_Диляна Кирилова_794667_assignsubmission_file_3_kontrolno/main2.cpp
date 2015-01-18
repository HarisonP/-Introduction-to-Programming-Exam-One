#include<iostream>
using namespace std;
const int SIZE = 3;
void fillMatrix(int[][SIZE]);
int sumOverDiagonal(const int[][SIZE], int&);
int main()
{
	int matrix[3][3];
	int sumOfTheElements = 0;

	fillMatrix(matrix);
	cout << "The sum of the elements over diagonal is: " << sumOverDiagonal(matrix, sumOfTheElements) << endl;
	return 0;
}
void fillMatrix(int arr [][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cin >> arr[i][j];
		}
	}
}
int sumOverDiagonal(const int[][SIZE], int& sum)
{

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (i < j)
			{
				sum++;
			}
		}
	}
	return sum;
}

//0.8/2
#include <iostream>

using namespace std;

void printArr(int *arr[])
{
	const int size = 6;
	cout << "Enter matrix NxN" << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> arr[i][j];
		}
	}

}

int sumOfDiagonal2(int *arr[])
{
	int result = 0;
	const int size = 6;
	int i = 1;

		for (int j = 0; j < size; j++)
		{
			result += arr[i][j];
		}

	return result;
}

/*int threeBiggestNumbers(int *arr)
{


	return
}
*/

int main()
{
	/*
	const int size = 6;
	int *arr;
	printArr(&arr);
	sumOfDiagonal2(&arr);
	cout << "sum of elements: " << sumOfDiagonal2 << endl;
		system("pause");
	*/


	int *arr[6][6];
	int result;
	
	for (int i = 0, int j = 1; i < 6; i++)
	{
		result += *arr[j][i];
	}

	return 0;
}
//0.3
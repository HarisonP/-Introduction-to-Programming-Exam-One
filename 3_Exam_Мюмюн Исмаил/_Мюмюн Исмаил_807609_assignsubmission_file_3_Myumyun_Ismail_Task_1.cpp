#include <iostream>
#include <string.h>

using namespace std;

/*������ 1
�� �� ������� ��� ���������, ��������� �� ������������, ������� � �������� **nxn** ��
��� ```int```, ������ 2 <= n <= 20 (n �� � ��������� � ����.) ( 0.1 �����),���� ����� �� ��
������ �� ������ � ��������� ���������:
�) ������ �� ���������� ��� ��������� �������� �� ��������� (0.7 �����);
�) ����� ���-����� �������� � ��������� ������ �� ��������� (0.7 �����);
�) ���-����� ��������� ����� � ���������(��� ��� ������� ������, ������� ���� ��
���, ����� � ���-������) (0.5);
�.� ��� ����� �� ��������� �� � �����, ���� ����������.
������ [[12,2], [12,2]] -> 2 (12 �� � �����); [[1,2], [12,3]] -> 3 (3 > 2 > 1 � 12 �� � �����);*/


void print_sum(int matrix[][20], int size)
{
	int sum = 0;

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if ((row + col) > (size - 1))
			{
				sum += matrix[row][col];
			}
		}
	}

	cout << "The sum is: " << sum << endl;
}


//This needs fixing
void smallest_three(int matrix[][5], int three[3], int matrix_size)
{
	int smallest = matrix[1][0];
	int row_smallest = 0;
	int col_smallest;
	int position = 0;

	while (position < 3)
	{
	for (int row = 1; row < matrix_size; row++)
	{
		for (int col = 0; col < matrix_size; col++)
		{
			if (smallest > matrix[row][col])
			{
				smallest = matrix[row][col];
				row_smallest = row;
				col_smallest = col;
			}
		}
	}
	three[position] = smallest;
	smallest = 2000000;
	matrix[row_smallest][col_smallest] = 2000000;
	position++;	
	}

	cout << "The smallest three are: ";

	for (int i = 0; i < 3; i++)
	{
		cout << three[i] << " ";
	}
	cout << endl;
}

void occuring_digits(int matrix[][20], int size)
{
	int digits[10] = { 10 };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] >= 0 && matrix[i][j] <= 9)
			{
				digits[matrix[i][j]]++;
			}
		}
	}

	int most_occuring = digits[0];
	int most_occuring_digit = 0;

	for (int i = 0; i < 10; i++)
	{
		if (most_occuring < digits[i])
		{
			most_occuring = digits[i];
			most_occuring_digit = i;
		}
		else if (most_occuring == digits[i])
		{
			most_occuring_digit = i;
		}
	}

	cout << endl << most_occuring_digit << endl;
}

int main()
{
	const int N = 5;
	int matrix[20][20] = { 0 };
	int element = 1;
	int three[3];

	int digits[10] = { 0 };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = element;
			element++;
		}
	}


	print_sum(matrix, N);
	//smallest_three(matrix, three, N);
	occuring_digits(matrix, N);


	cout << endl;
	

	system("pause");
	return 0;
}

//1.8/2
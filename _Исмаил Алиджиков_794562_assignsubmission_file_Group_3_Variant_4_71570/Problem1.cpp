/*#include <iostream>

//Post problem - maximum number of parameters - 256
//Problem 1
using namespace std;

const int SIZE = 3;

int find_the_smallest(int &a, int &b, int &c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a && b < c)
	{
		return b;
	}
	else if (c < a && c < b)
	{
		return c;
	}
}

int find_the_biggest(int &a, int &b, int &c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else if (c > a && c > b)
	{
		return c;
	}
}

int find_the_middle(int &a, int &b, int &c)
{
	if ((a > b && a < c) || (a < b && a > c))
	{
		return a;
	}
	else if ((b > a && b , c) || (b < a && b > c))
	{
		return b;
	}
	else if ((c > a && c < b) || (c < a && c >b))
	{
		return c;
	}
}


int** read_matrix(int rows, int cols)
{
	int** matrix = new int*[rows];
	for (int row = 0; row < rows; row++)
	{
		matrix[row] = new int[cols];
		for (int col = 0; col < cols; col++)
		{
			cout << "matrix[" << row << "][" << col << "]: ";
			cin >> matrix[row][col];
		}
	}

	return matrix;
}

int main()
{
	int** matrix = read_matrix(SIZE, SIZE);

	//Find the sum
	int sum = 0;
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = SIZE - row; col < SIZE; col++)
		{
			sum += matrix[row][col];
		}
	}

	cout << "The sum is: " << sum << endl;

	// The smallest three numbers
	int small_one = matrix[1][0];
	int small_two = matrix[1][1];
	int small_three = matrix[1][2];
	int biggest = find_the_biggest(small_one, small_two, small_three);
	int smallest = find_the_smallest(small_one, small_two, small_three);
	int middle = find_the_middle(small_one, small_two, small_three);

	for (int row = 1; row < SIZE; row += 2)
	{
		for (int col = 0; col < SIZE; col++)
		{
			if (matrix[row][col] < biggest)
			{
				biggest = matrix[row][col];
				biggest = find_the_biggest(smallest, biggest, middle);
				smallest = find_the_smallest(smallest, biggest, middle);
				middle = find_the_middle(smallest, biggest, middle);
			}
		}
	}

	//Print
	cout << smallest << " " << middle << " " << biggest << endl;

	//Most Frequent
	int most_frequent = 0;
	int temp[10] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if ((char)matrix[i][j] > 47 && (char)matrix[i][j] < 58)
			{
				temp[matrix[i][j] - '0']++;
			}
		}
	}

	int max = temp[0];
	int best_index = 0;
	for (int i = 0; i < 10; i++)
	{
		if (max < temp[i])
		{
			max = temp[i];
			best_index = i;
		}
	}

	cout << "Most frequent element is: " << best_index << endl;
	system("pause");
	return 0;
}*/
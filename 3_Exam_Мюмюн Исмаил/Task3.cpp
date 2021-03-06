#include <iostream>
#include <cmath>

using namespace std;

int* difference(int* first, int* second)
{
	
	int third[100];
	int result[5];
	int counter = 0;
	int size = 0;
	
	//magical constant - not a good practise :)
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((first[i] != second[j]) && (second[j] % 2 == 0))
			{
				// third[counter ++] = second[j]; will also work :)
				third[counter] = second[j];
				counter++;
			}
		}
	}

	for (int i = 0; i < counter; i++)
	{
		for (int j = 0; j < counter; j++)
		{
			if (third[i] != third[j])
			{
				result[size] = third[i];
				size++;
			}
		}
	}
	// you can not do this cause result is a local variable and it will be destroyed when the fucntion is finished.
	// there is another way young padawan, but patient you must be... 
	// -0.3
	return result;
}

void section(int* first, int* second)
{
	int result[5];
	int size = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (first[i] == second[j])
			{
				result[size] = second[j];
				size++;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << result[i];
	}
}

void armstrong(int* first)
{
	int digits[10];
	int copy;
	int last_digit;
	int size = 0;
	// sum usually give us not enought info. this could be sum_of_armstrong 
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		copy = first[i];
		while (copy > 0)
		{
			last_digit = copy % 10;
			copy /= 10;
			sum += pow((double)last_digit, 3);
		}
		if (sum == first[i])
		{
			digits[size] = first[i];
			size++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << digits[size];
	}
}

int main()
{
	int first_array[5];
	int second_array[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> first_array[i];
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> second_array[i];
	}

	section(first_array, second_array);
	int* arr =  difference(first_array, second_array);
	armstrong(arr);
	return 0;
}
//clean code, functions, 
// + 0.1

// score: 
// 1.8/(1.5 + 0.5)

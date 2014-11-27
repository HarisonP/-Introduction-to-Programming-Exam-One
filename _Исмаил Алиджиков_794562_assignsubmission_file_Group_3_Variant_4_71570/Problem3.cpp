#include <iostream>
#include <cmath>

using namespace std;

const int ARR_SIZE = 10;

int Find_length(int number)
{
	int counter = 0;
	while (number > 0)
	{
		number /= 10;
		counter++;
	}
	return counter;
}

int main()
{
	int arr_one[ARR_SIZE];
	int arr_two[ARR_SIZE]; 

	//Read arr_one
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cin >> arr_one[i];
	}

	//Read arr_two
	for (int i = 0; i < ARR_SIZE; i++)
	{
		cin >> arr_two[i];
	}

	//Find the section of arr_one and arr_two
	int temp[ARR_SIZE] = {};
	int counter = 0;
	int l = 0;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		for (int j = 0; j < ARR_SIZE; j++)
		{
			if (arr_one[i] == arr_two[j])
			{
				temp[l] = arr_one[i];
				counter++;
				l++;
				break;
			}
		}
	}

	//Print The Section
	cout << "Section: ";
	for (int i = 0; i < counter; i++)
	{
		cout << temp[i] << ", ";
	}
	cout << endl;

	//Find the difference
	int temp_two[ARR_SIZE] = {};
	int counter_two = 0;
	int k = 0;

	bool flag = true;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		flag = true;
		for (int j = 0; j < counter; j++)
		{
			if (arr_two[i] == temp[j])
			{
				flag = false;
				break;
			}
		}

		if (flag && arr_two[i] % 2 == 0)
		{
			temp_two[k] = arr_two[i];
			counter_two++;
			k++;
		}
	}

	//Print the difference
	cout << "Difference: ";
	for (int i = 0; i < counter_two; i++)
	{
		cout << temp_two[i] << ", ";
	}
	cout << endl;

	//Find Armstrong numbers
	int sum = 0;
	cout << "Armstrong Numbers: ";
	for (int i = 0; i < ARR_SIZE; i++)
	{
		int copy_i = arr_two[i];
		int number_counter = Find_length(arr_two[i]);


		while (arr_two[i] > 0)
		{
			int digit = arr_two[i] % 10;
			arr_two[i] /= 10;
			sum += digit * digit * digit;
		}
		if (copy_i == sum)
		{
			cout << copy_i << ", ";
			break;
		}
		
	}
	cout << endl;
	



	system("pause");
	return 0;

}
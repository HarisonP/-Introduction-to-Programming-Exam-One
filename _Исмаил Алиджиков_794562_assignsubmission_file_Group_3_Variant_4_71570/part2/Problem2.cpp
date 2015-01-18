#include <iostream>

//Problem 2

using namespace std;

int smallest_word(char* arr)
{
	int min = 0;
	int current = 0;
	bool in_word = false;
	int start = 0;
	int end = 0;
	char temp[20] = { 0 };
	int i = 0;
	int l = 0;

	for (; arr[i]; i++)
	{
		if (!in_word && arr[i] != ' ')
		{
			in_word = true;
			start = i;
		}
		else if (in_word && arr[i] == ' ')
		{
			in_word = false;
			end = i;

			for (int j = start; j < end; j++)
			{
				current++;
			}
			if (min < current)
			{
				min = current;
			}
			current = 0;
		}
		
	}


	return min;
}

void reverse_words(char* arr)
{
	bool in_word = false;
	int start = 0;
	int end = 0;
	char temp[20] = {0};
	int i = 0;
	int l = 0;

	for (; arr[i]; i++)
	{
		if (!in_word && arr[i] != ' ')
		{
			in_word = true;
			start = i;
		}
		else if (in_word && arr[i] == ' ')
		{
			in_word = false;
			end = i - 1;
			
			for (int j = end; j >= start; j--)
			{
				temp[l] = arr[j];
				l++;
			}
			temp[l] = ' ';
			l++;
		}		
	}
	temp[l] = '\0';
	

	cout << temp << endl;
}

int find_words(char* arr)
{
	int counter = 0;
	bool in_word = false;

	for (int i = 0; arr[i]; i++)
	{
		if (!in_word && arr[i] != ' ')
		{
			in_word = true;
			counter++;
		}
		else if (in_word && arr[i] == ' ')
		{
			in_word = false;
		}
	}

	return counter;
}

int main()
{
	char arr[20];
	cin.getline(arr, 21);

	int words = find_words(arr);

	// Print number of words
	cout << words << endl;

	//Reverse words
	reverse_words(arr);

	//Smallest word
	int min = smallest_word(arr);
	cout << min << endl;
	

	system("pause");
	return 0;
}

//2.1/2.2
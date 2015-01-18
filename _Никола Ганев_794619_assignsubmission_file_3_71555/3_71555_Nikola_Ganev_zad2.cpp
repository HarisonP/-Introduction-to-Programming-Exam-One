#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int word_count(char str[])
{
	int word_count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] = ' ')
		{
			word_count++;
		}
	}
}
void reverse_words(char str[])
{
	int last_i = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] = ' ')
		{
			for (int j = last_i; j < i; j++)
			{
				// тук обръща думата
			}
			last_i = i;
		}
	}
	return;
}
int most_chars_in_word(char str[])
{
	int last_i = 0;
	int cout_len = 0;
	int max = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] = ' ')
		{
			for (int j = last_i; j < i; j++)
			{
				cout_len = i - 1;
				if (max < cout_len)
				{
					max = cout_len;
				}

			}
			last_i = i;
		}
	}
	return max;
}
int main()
{
	char str[200];
	cin >> str; 
	cout << word_count(str) << endl;
	cout << "most_chars_in_word0" << endl;
	cout << most_chars_in_word(str) << endl;




	return 0;
}

//1.5//2.2
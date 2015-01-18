#include <iostream>
#include <cmath>

using namespace std;

int number_of_words(char str[33])
{
	int current_number = 1;
	for (int i = 0; i < strlen(str) - 1; i++)
	{
		if ((str[i - 1] == ' ') && (str[i] != ' '))
		{
			current_number = current_number + 1;
		}
	}
	return current_number;
}

int shortest_word(char str[33])
{
	int current_word = 0; int current_shortest_word = 100;
	for (int i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] != ' ')
		{
			current_word = current_word + 1;
		}
		else if ((str[i] = ' ') && (str[i + 1] != ' '))
		{
			if (current_word < current_shortest_word)
			{
				current_shortest_word = current_word;
			}
			current_word = 0;
		}
	}
	return current_shortest_word;
}

int main()
{
	char str[] ="random izbrani dumi za zadachata";
	cout << str;
	cout << endl << "The number of words are :" << number_of_words(str) << endl;
	cout << "The shortest word is:" << shortest_word(str) << " long" << endl;
	system("pause");
	return 0;
}
//1.2/2/2
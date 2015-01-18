#include <iostream>
#include <string.h>

using namespace std;

/*������ 2
�� �� ������ ��������, ����� �� ������� ��� �����:
�) ���� �� ������ ���� (������ � ������ �� ��������� �� � � (�����)) ( 0.5 ����� );
�) ���, ������� �� ������� ���� �������� �� ��������� ���� (1.0 �����);
������:
abc def => cba fed
�) ������� �� ���-������ ���� (0.7 �����);
�� ��������� �� �������� �� �� �������� ���� ���� �������.*/

int word_count(char str[])
{
	int count = 1;
	int length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

	return count;
}


void reversed_words(char str[], char reversed[])
{
	char buffer[1000];
	int position = 0;
	int reversed_position = 0;
	int length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (str[i] != ' ')
		{
			buffer[position] = str[i];
			position++;
		}
		else
		{
			int temp = position;
			position--;
			while (position >= 0)
			{
				reversed[reversed_position] = buffer[position];
				position--;
				reversed_position++;
			}

			position = temp;
			reversed[reversed_position] = ' ';
			reversed_position++;
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << reversed[i];
		if (reversed[i] == ' ')
		{
			cout << ' ';
		}
	}
	cout << endl;
}

int shortest_word(char str[])
{
	int shortest = 1000;
	int letters = 0;
	int length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (str[i] != ' ')
		{
			letters++;

			if (str[i+1] == ' ' || i == length - 1)
			{
				if (letters < shortest)
				{
					shortest = letters;
					letters = 0;
				}
			}
		}
	}

	return shortest;
}

bool is_power_of(int number)
{
	if (number % 5 == 0 || number % 7 == 0)
	{
		if (number % 5 == 0)
		{
			is_power_of(number / 5);
		}
		else
		{
			is_power_of(number / 7);
		}
	}
	else
	{
		return false;
	}

	return true;
}

int main()
{
	char str[1000];
	char reversed[1000];

	cin.getline(str, 1000);
	cout << is_power_of(225);

	cout << word_count(str) << endl;
	cout << shortest_word(str) << endl;
	reversed_words(str, reversed);

	system("pause");
	return 0;
}
//2/2.2
//0.8/0.8
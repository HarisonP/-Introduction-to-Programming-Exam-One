#include <iostream>
#include <cstring>

using namespace std;

//otg: 127


int words(char *string)
{
	int result = 0;
	bool ignore = false;

	for (int i = 0; i < 50; i++)
	{
		if (string[i] == ' ')
		result++;
	} 

	return result + 1; // zashtoto predi purvata duma nqma space
}


/*bool isLetter(char *string)
{
	char c;
	if ((c > 'a' && c < 'z') || (c > 'A') && 'Z')
		return true;
}

int countWords(char* string)
{
	int result;
	bool inWords = false;
	int i = 0;

	while (string[i])
	{
		if (!inWords && isLetter)
		{
			inWords = true;
			result++;
		}
		else if (inWords && !isLetter)
		{
			inWords = false;
		}
		i++;
	}
}
/*
*/
/**/
int main()
{
	char str[200];
	cout << "Enter string" << endl;
	cin.getline(str, 50);

	cout << "The words written: " << words(str) << endl;

	/*cout << "Words: " << countWords(str);*/
	system("pause");

	return 0;
}

//0.5
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int count_words(char* words)
{
	int counter = 1;
	for (int i = 0; i < 100; i++)
	{
		if (words[i] == ' ')
		{
			counter++;
		}
	}
	return counter;
}

//not finished
/*char reverse_word(char* words)
{
	int length = strlen(words);
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
		int temp = words[0];
		words[0] = words[length-1];
		words[length-1] = temp;
		}

	}
	return *words;
}*/

int main()
{
	char words1[100];
	cin.getline(words1,100);
	cout << count_words(words1) << endl;
	//cout << words << endl;


	char word[] = { "kola" };
//	cout << reverse_word(word) << endl;


	system("pause");
	return 0;
}

// 1/2.2 points
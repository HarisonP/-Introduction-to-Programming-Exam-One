#include<iostream>
using namespace std;

void findWord(char*, int&, int&, int&, int);
void reverseWordsInSentence(char*, int, int, int&);
int main()
{

	char sentence[100];
	cin.getline(sentence, 100);

	int beginingOfWord = 0;
	int endOfWord = 0;
	int sumOfWords = 0;
	int lengthOfWord = 1;
	findWord(sentence, beginingOfWord, endOfWord, sumOfWords, lengthOfWord);

	
	cout << sentence << endl;
}

void findWord(char* arr, int& begin , int& end, int& sum, int length)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[0] == '\0')
		{
			sum--;
		}
		if (arr[i + 1] == '\0')
		{
			end = i;
		}
		if (arr[i] != ' ')
		{
			begin = i;

			for (int j = i; arr[j] != ' ' && arr[j]!= '\0'; j++)
			{
				
				end = j;
			}
			reverseWordsInSentence(arr, begin, end, length);

			i = end;
			sum++;
		}
	}
	cout << "The biggest word has got " << length +1 << " letters." << endl;
	cout << "The sentence has got " << sum << " word(s)." << endl;
}
void reverseWordsInSentence(char* arr, int begin, int end,int& length)
{
	int oldWordLength = length;
	for (int i = begin; i < end; i++)
	{
		char temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		end--;

		length++;
	}
	//why?
	int newWordLength = length;

	if (newWordLength > oldWordLength)
	{
		oldWordLength = newWordLength;
	}
}
//2.1/2.2
#include<iostream>
#include<conio.h>
#include<cstring>
#include<cmath>

using namespace std;
 
int main()
{
	char sentence[1000];
	cin.getline(sentence, 1000);

	int len = strlen(sentence);

	int counter = 0;
	for (int i = 1; i < len; i++)
	{
		if (sentence[i] == ' ')
		{
			counter++;
		}
	}
	cout << "The words are: " << counter + 1 << endl;

	int counter1 = 0;
	int shortest = 1000;
	for (int i = 0; i <= len; i++)
	{
		if (sentence[i] != ' ')
		{
			counter1++;
		}
		if (sentence[i] == ' ' && shortest > counter1)
		{
			shortest = counter1;
		}
		if (sentence[i] == ' ')
		{
			counter1 = 0;
		}
	}
	cout << "The shortest word contains: " << shortest << " letters." << endl;
	_getch();
	return 0;
}

//1.2/2.2
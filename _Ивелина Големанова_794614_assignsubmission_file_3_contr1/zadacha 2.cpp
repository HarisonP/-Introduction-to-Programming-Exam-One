#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[6] = "ab cd" ;
	int word_counter = 1;
	
	for (int i = 0; i <= 6; i++)
	{
		if (str[i] == '\ ')
		{
			++word_counter;
		}
	}

	cout << "Dumite v niza sa:" << word_counter << endl;


	system("pause");
	return 0;

}
//0.4/ 2.2
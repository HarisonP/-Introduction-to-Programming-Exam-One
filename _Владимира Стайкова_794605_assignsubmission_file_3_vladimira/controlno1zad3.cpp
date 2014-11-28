#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int array[10], array2[10];
	// + 0.1 for input operation 
	// magic consts?? :(
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}

	// so wrong....
	cout << array[10];
	return 0;

}
//score 0.1/ (1.5 + 0.5)
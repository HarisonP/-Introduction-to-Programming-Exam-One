#include <iostream>

using namespace std;

int main()
{
	int array_size = 10, array1[10] , array2[10] ;
	bool are_numbers_equal = false ;
	cout << "Vyvedete 10 chisla za pyrviq masiv:" ;
	for(int i = 0 ; i < array_size ; ++i)
	{
		cin >> array1[i];
	}
	cout << "Vyvedete 10 chisla za vtoriq masiv:" ;
	for(int j = 0 ; j < array_size ; ++j)
	{
		cin >> array2[j];
	}
	cout << "Sechenieto na dvata masiva e: " ;
	for(int i = 0 ; i < array_size; ++i)
	{
		for(int j = 0; j < array_size; ++j)
		{
			if( array1[i] == array2[j] )
			{
				cout << array1[i] << " ";
			}
		}
	}
	cout << "\n Chislata, koito se sadurjat samo vyv vtoriq masiv i sa chetni sa:" << endl ;
	for(int i = 0; i < array_size ; ++i)
	{
		are_numbers_equal = false ;
		for(int j = 0; j < array_size ; ++j)
			if( array1[j] == array2[i] )
			{
				are_numbers_equal = true ;
			}
		if(!(are_numbers_equal) && (array2[i] % 2 == 0))
		{
			cout << array2[i] << " " ;
		}
	}
	system("pause") ;
	return 0;
}

//score 1.4 / 1.5 + 0.5
#include <iostream>
using namespace std;
int main()
{
	 double arrayA[3];
	 double arrayB[3];
	 int countB,countEqual;
	 int sizeA = 3, sizeB = 3 ;
	 for (int i = 0; i < sizeA; i++)
	 {
		 cin >> arrayA[i];
		
	 }
	 cout << endl;
	 for (int j = 0; j < sizeB; j++)
	 {
		 cin >> arrayB[j];
	 }
	 cout << endl;
	 for (int i = 0 ; i < sizeA ; i++)
	 {
		 for (int j = 0; j < sizeB; j++)
		 {
			while (arrayA[i] == arrayB[j])
			 {
				countEqual = arrayA[i];
				cout << "Equal" <<  " " << countEqual << endl;
			 }
			cout << endl;

			for (int i = 0; i < sizeA; i++)
			{
				for (int j = 0; j < sizeB; j++)
				{
					while (arrayA[i] != arrayB[j])
					{
						countB = arrayB[i];
						cout << " array B only" << " " << countB << endl;
					}
					cout << endl;
				}
				

			  
	 }
	 system("PAUSE");
	 return 0;
}
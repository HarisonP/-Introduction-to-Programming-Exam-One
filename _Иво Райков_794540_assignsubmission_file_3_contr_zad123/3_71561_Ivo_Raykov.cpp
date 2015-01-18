
//zad 1
#include<iostream>
using namespace std;

void input(int arr[][100],int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
		cin >> arr[i][j];
		}
}
void sum(int arr[][100], int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
		if (i + j < n - 1) cout<< arr[i][j]<<" ";
		}
}
void biggest_number(int arr[][100], int n)
{
	int br=0;
	int max = arr[0][0];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; j += 2)
		{
		    if (max < arr[i][j])
		       {
			         max = arr[i][j];
		       }
		}
	cout << max;
		

}

// 1.3 / 2
int main()
{
	int arr[100][100];
	int n;
	cin >> n;
	input(arr, n);
	sum(arr, n);
	biggest_number(arr, n);
	cin >> n;
	return 0;
}

//

/*
//zad 2
#include<iostream>
using namespace std;

void sentance_to_divide(char* sentance, int size)
{
	int br = 0+1;
	for (int i = 0; i < size; ++i)
	{
		if (sentance[i] == ' ' ) br++;
	}
	cout<<br;
}
int main()
{
	char sentance[1000]; 
	cin.getline(sentance, 36);
	sentance_to_divide(sentance, 36);
	
	system("pause");
	return 0;


}
*/
//0.5/ 2.2

/*
//zad 3
#include<iostream>
using namespace std;

bool pow_on_6(int number)
{
if (number == 1) return true;
if (number % 6 != 0) return false;
pow_on_6(number / 6);
}
bool pow_on_2(int number)
{
if (number == 1) return true;
if (number % 2 != 0) return false;
pow_on_2(number / 2);
}
bool pow_on_3(int number)
{
if (number == 1) return true;
if (number % 3 != 0) return false;
pow_on_3(number / 3);
}
int main()
{
int number;
cin >> number;
if (pow_on_6(number) || pow_on_2(number) || pow_on_3(number)) cout << "da";
else cout << "ne";
cin >> number;
return 0;
}
*/

// 0.7/0.8
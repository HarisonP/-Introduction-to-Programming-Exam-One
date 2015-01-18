// nqma  ogranichenie v parametrite 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a[20][20];
	int n;
	int sum=0;
	cout << "enter n: between 2 and 20" << endl;
	cin >> n;
	
	if (n >= 2 && n <= 20)
	{
		for (int i = n; i <= 20; i++)
			for (int j = i; j <= 20; j++)
			{
			cin >> a[i][j];
			}
	}
	else cout << "incorrect n";


	for (int i = n; i <= n; i--)
		for (int j = 2; j <= n; j++)
		{
		sum += a[i][j];
		cout << sum << endl;

		}
	for (int i = 2; i <= 20; i++)
		for (int j = i; j <= 20; j++)
			if (i % 2 == 0)
			{
		int min = a[i][j];
		for (int i = 2; i <= 20; i++)
			for (int j = i; j <= 20; j++)
				if (min > a[i][j])
				{
			min = a[i][j];
				cout <<  a[i][j]<<endl;

				}
		


			}
	
	
	system("PAUSE");
		return 0;

}
//0.8/2
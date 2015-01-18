//64

#include<iostream>

using namespace std;

int summation(int a[][], int n)
{
	for (int i = 0, i < n, i++)
	{
		for (int j = 0, j < n, j++)
		{
			if (i<(n - j))
			{
				sum = sum + a[i][j];
			}
		}

	}
	return sum;
}

void threemax(int a[][], int b[][], int n)
{
	int k = 0;
	int swap = 0;
	for (int i = 0, i < n, i++)
	{
		for (int j = 0, j < n, j++)
		{
			if (i % 2 == 0)
			{
				b[k] == a[i][j];
				k++;
			}
		}
	}

	for (int i = 0, i < n - 1, i++)
	{
		for (int j = 0, j < n - i - 1, j++)
		{
			if (b[j] < b[j + 1])
			{
				swap = b[j];
				b[j] = b[j + 1];
				b[j + 1] = swap;
			}
		}
	}

}

int rarest(int a, int n)
{
	int swap = 0;
	int p[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int l = 0;
	for (int i = 0, i < n, i++)
	{
		for (int j = 0, j < n, j++)
		{
			if (a[i][j] / 10 == 0)
			{
				l = a[i][j];
				p[l]++;
			}
		}

	}

	for (int i = 0, i < n - 1, i++)
	{
		for (int j = 0, j < n - i - 1, j++)
		{
			if (p[j] > p[j + 1])
			{
				swap = p[j];
				p[j] = p[j + 1];
				p[j + 1] = swap;
			}
		}
	}

	return p[0];

}

int main()
{
	int n = 0;
	int sum = 0;
	while ((n < 2) && (n>20))
	{
		cout << endl << "vavedi n (2<=n<=20): ";
		cin >> n;
	}

	int a[n][n];

	int b[201];

	cout << "sumata na elementite nad vtori4niq diagonal e : " << summation(a, n);

	threemax(a, b, n);

	cout << "3-te nai golemi elementa v 4etnite redove sa: " << endl << b[0] << endl << b[1] << endl << b[2];

	cout << "nai rqdko sre6tanata cifra e: " << rarest(a, n);


	return 0;
}

// 1.7/2
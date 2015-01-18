#include <iostream>
using namespace std;

int sum_above_secodn_diag(int matrix[][3] , int n)
{
	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ( i > j)
			sum += matrix[i][j];
		}
	}
	return sum;
}

int three_hightest_elemets_in_odd_rows(int matrix[][3], int n, int max )
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0)
			{
				if (matrix[i][j] > max )
				{
					max = matrix[i][j];
				}
			}
		}
	}
	return max;
}

int less_finded(int matrix[][3], int n)
{
	int one_cout = 0;
	int two_cout = 0;
	int three_cout = 0;
	int four_cout = 0;
	int five_cout = 0;
	int six_cout = 0;
	int seven_cout = 0;
	int eight_cout = 0;
	int nine_cout = 0;
	//arrays for you darling?
	int less = 0;
	int less2 = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			switch (matrix[i][j])
			{
			case 1: one_cout++;
			break;
			case 2: two_cout++;
			break;
			case 3: three_cout++;
			break;
			case 4: four_cout++;
			break;
			case 5: five_cout++;
			break;
			case 6: six_cout++;
			break;
			case 7: seven_cout++;
			break;
			case 8: eight_cout++;
			break;
			case 9: nine_cout++;
			break;
			}
		}
	}
	less = one_cout;
	if (less < two_cout)
	{
		less = two_cout;
		less2 = 2;
		if (less < three_cout)
		{
			less = three_cout;
			less2 = 3;
			if (less < four_cout)
			{
				less = four_cout;
				less2 = 4;
				if (less < five_cout)
				{
					less = five_cout;
					less2 = 5;
					if (less < six_cout)
					{
						less = six_cout;
						less2 = 6;
						if (less < seven_cout)
						{
							less = seven_cout;
							less2 = 7;
							if (less < eight_cout)
							{
								less = eight_cout;
								less2 = 8;
								if (less < nine_cout)
								{
									less = nine_cout;
									less2 = 9;
								}
							}
						}
					}
				}
			}
		}
	}
	
	return less2;
}

int main()
{
	int const n = 3;
	int matrix[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	int max = matrix[0][0];
	int previous_max = matrix[0][0];
	int last_max = matrix[0][0];

	cout << "Sum of above second Diagonal" << endl;
	cout << sum_above_secodn_diag(matrix , n) << endl;
	cout << "Three_hightest_elemets_in_odd_rows are:" << endl;
	cout << three_hightest_elemets_in_odd_rows(matrix, n, max) << endl; // mi samo edin uspqh da go napravq xD
	cout << "less finded : " << endl;
	cout << less_finded(matrix, n) << endl;


	return 0;
}  

//1.2/2
//#include<iostream>
//using namespace std;
//
//void print_matrix(int matrix[][20], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << matrix[i][j] << ' ';
//		}
//		cout << endl; 
//	}
//
//}
//
////int sum_above_secondary_diagonal(int matrix[][20], int n)
////{
////	int sum = 0;
////	for (int i = 0; i < n - 1; i++)
////	{
////		for (int j = 0; j < n-i; j++)
////		{
////			sum += matrix[i][j];
////		}
////	}
////
////		return sum;
////}
// 0.6/0.7
//void biggest_elements(int matrix[][20], int n, int& max1, int& max2, int& max3)
//{
//	max1 = matrix[0][0];
//	int k = 0;
//	for (int i = 1; i < n; i += 2)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (max1 < matrix[i][j])
//			{
//				k = max2;
//				max2 = max1;
//				max1 = matrix[i][j];
//				max3 = k;
//			}
//		}
//	}
//
//
//}
// 0.5/ 0.7
//
////int rare(int matrix[][20], int n)
////{
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			if (a[i][j] == )
////
////		}
////
////		
////	}
////
////
////}
//int main()
//{
//	int matrix[20][20];
//	int dimensions;
//	cout << "Enter dimensions: " << endl;
//	cin >> dimensions;
//
//	for (int i = 0; i < dimensions; i++)
//	{
//		for (int j = 0; j < dimensions; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	print_matrix(matrix, dimensions);
//	int max1 = 0;
//	int max2 = 0;
//	int max3 = 0;
//	cout << "Sum above secondary diagonal: " << sum_above_secondary_diagonal(matrix, dimensions) << endl;
//	biggest_elements(matrix, dimensions, max1, max2, max3);
//
//	cout << "Max 1:" << max1 << endl;
//	cout << "Max 2:" << max2 << endl;
//	cout << "Max 3:" << max3 << endl;
//
//	system("pause");
//	return 0;
//}
//




//2

//#include<iostream>
//using namespace std;
//int words(char* name, int n)
//{
//	int count = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (name[i] == ' ')
//			count++;
//	}
//	return count;
//
//}
//  0.3 / 0.5
//int longest_word(char* name, int n)
//{
//	int count = 0;
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (name[i] != ' ')
//			count++;
//		else if (name[i] == ' ')
//		{
//			if (max < count)
//			{
//				max = count;
//				count = 0;
//			}
//		}
//
//	}
//	return max;
//}
// 0.7/0.7
//
//
//
//int main()
//{
//	char sentence[30];
//	cin.getline(sentence, 30, '.');
//	int length = strlen(sentence);
//	cout << "Words: " << words(sentence, length) << endl;
//	cout << "Longest word: " << longest_word(sentence, length) << endl;
//	system("pause");
//	return 0;
//}


//3

//#include<iostream>
//using namespace std;
//bool rec(int n)
//{
//	if (n % 2 == 0)
//	{
//		if (n / 2 == 1)
//			return true;
//		else
//		{
//			return rec(n / 2);
//		}
//	}
//	else if (n % 3 == 0)
//	{
//		if (n / 3 == 1)
//			return true;
//		else
//		{
//			return rec(n / 3);
//		}
//	}
//	return false;
//	
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (rec(n))
//		cout << "YEAH" << endl;
//	else
//		cout << "NO" << endl;
//
//	system("pause");
//	return 0;
//	
//
//}

// 0.8/0.8
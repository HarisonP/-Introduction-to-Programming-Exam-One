#include <iostream>
using namespace std;

int main()
{
	cout << " Enter a number between 100 and  999: ";
	int number = 0;
	cin >> number;


	int lastDigit = number % 10;
	int desetici = number / 10 % 10;
	int firstDigit = number / 100;

	/*
	int sum = 0;
	sum = lastDigit*firstDigit;

	cout << sum << endl;

	if (lastDigit % 3 == 0)
	{
	{
	cout << lastDigit / 3;

	}

	if (desetici % 3 == 0)
	{
	cout << desetici / 3;
	}

	if (firstDigit % 3 == 0)
	{
	cout << firstDigit / 3;
	}
	}
	if (lastDigit % 3 != 0 && lastDigit % 2 == 0)
	{
	{
	cout << lastDigit / 2;
	}
	if (desetici % 3 != 0 && desetici % 2 == 0)
	{
	cout << desetici / 2;
	}
	if (firstDigit % 3 != 0 && firstDigit % 2 == 0)
	{
	cout << firstDigit / 2;
	}
	}

	if (lastDigit % 3 != 0 && lastDigit % 2 != 0)
	{
	{
	cout << lastDigit - 2;
	}
	if (desetici % 3 != 0 && desetici % 2 != 0)
	{
	cout << desetici - 2;
	}
	if (firstDigit % 3 != 0 && firstDigit % 2 != 0){
	cout << firstDigit - 2;
	}
	}

	*/
	int reversed = 0;
	reversed = lastDigit * 100 + desetici*10 + firstDigit ;
	cout << reversed;

	cout << endl;

	int max =0;
	if (number > reversed)
	{
		max = number;
		cout <<" The bigger number is: "<< number;
	}
	else{
		max = reversed;
		cout << "The bigger number is: " << reversed;
	}



	system("pause");
	return 0;
}

// haha nice try
// you know something but not what was needed here
// 0.3/(1.5  + 0.5)
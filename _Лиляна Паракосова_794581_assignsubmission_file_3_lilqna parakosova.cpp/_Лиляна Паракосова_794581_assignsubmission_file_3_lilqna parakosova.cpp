// lilqna parakosova. cpp.cpp : Defines the entry point for the console application.  variant 3 zadacha 3
//
/*
#include "stdafx.h"
#include "iostream"
#include"cmath"
int _main()
{
	int j=0;
	int arr1[10];
	int arr2 [10];
	
	for (int i = 0; i <= 10; i = i + 1)
	{
		cout << "insert numbers";
		cin >> arr1[i];
		// nope :)
		
		if (arr1[i] % 13 != 0)
		{
			i = i + 1;
			cout << arr1[i];
		}
	}
		for (int j = 0; j <= 10; j = j = 1){

			cin >> arr2[J];

	}


	}


	
	return 0;
}

// score 0.3 /1.5 + 0.5
*/

//zadacha2 
#include"iostream"
#include"cmath"
using namespace std;
int _main(){
	int x = 0;
	int a = 0;
	int b = 0; 
	int c = 0;
	cout << "vavedete chislo ot klaviaturata";
	cin >> x;
	if (x % 10 == a){
		a = x % 10;
		b = a / 10;
		c = a - b;
		cout << "the number is  " << c;

	}
	if (x % 3 == 0){

		cout << "the number is" << x / 3;

	}
	// == needed
	if (x % 3 != 0 && x % 2 = 0){
		cout << "the namber is " << x / 2;
	}//
	





	return 0;


}

//score : 0.3/1.5 + 0.5


//zadacha 1 
#include"iostream "
#include"cmath"
using namespace std;
int main(){
	int a = 0;
	int x = 0;
	cin>> x;
	// ==  x = x+ 1???
	// -0.2
	for (x = 8 && x <= 25; x = x + 1)
	{

		if (x % 2 == 0){
			// what??
			x % 10 == a;
			cout << a*(x / 2);

		}

		else{
			cout << x*(x ^ 2 - 1);
		}
	}
	if (x > 0 && x <= 8){
		cout << (x * 2) * 5 + 2 * x ^ 4;

	}
	if (x > -lnf && x <= 0){
		cout << x ^ 2;


	}



	// well nooo... 
	// score: 0.2/1.0




	return 0;

}
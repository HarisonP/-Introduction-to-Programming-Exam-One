 // ConsoleApplication1 3_71535_lilqna parakosova.cpp : Defines the entry point for the console application.
//
//zadacha 1
/*
#include<iostream>
#include "stdafx.h"
#include<math.h>
using namespace std;

int _tmain()
{
	int max3 = 0;
	int max2 = 0;
	int max = 0;
	int sum = 0;
	int a[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++){
		
			cout << "vavefete chislata";
			cin >> a[i][j];

		}

	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++){
			if (j + i == 9){
				sum = sum + a[i][j];

			}


		}
	}

		cout << sum;

		for (int i = 0; i < 10; i = i + 2){
			for (int j = 0; j < 10; j++){
				if (a[i][j] > max){
					max = a[i][j];
				}
				
					

				}
			}
		cout << max;
		for (int i = 0; i < 10; i = i + 2){
			for (int j = 0; j < 10; j++){
				if (a[i][j] > max2 && a[i][j] < max){
					max2 = a[i][j];
				}
			}
			cout << max2;
			for (int i = 0; i < 10; i = i + 2){
				for (int j = 0; j < 10; j++){
					if ((a[i][j] > max3 && max3 < max2) && max3 < max){
						max3 = a[i][j];

					}
				}
			}
			cout << max3;
			cout << "sunmata na trite maksimalni elementi e  chislata e" << max + max2 + max3;

			for (int i = 0; i < 10; i++){
				for (int j = 0; j < 10; j++){
					
				
				}
			}
			return 0;
		}
//1.4/2

		*/
		
		//zadacha 2 


#include<iostream>
#include "stdafx.h"
#include<math.h>
#include<cstring>
		using namespace std;
		char masivobr(char std){
			char str2;
		





		}
		
		int broidumi(char str[100])
		{
			int counter = 0;
			for (int i = 1; i < strlen(str); i++){
				if (str[i] !=' '){
				
					counter++;

				}



			}


		}
		




		int _tmain(){

			int n;
			char str[] = "mnogo e trudno kontrolnoto";

			n = broidumi(str[]);

















			return 0;
	}	

//0.3/2.2













			
		

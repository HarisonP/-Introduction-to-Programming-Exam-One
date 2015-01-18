#include <iostream>
using namespace std;

/*
Answer to Question1 - 127
*/

bool isDigit(int a) {
	return a < 10 && a >= 0;
}

int main() {
	const int SIZE = 4;
	int arr[SIZE][SIZE];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			int a;
			cin >> a;
			arr[i][j] = a;
			//a;??
			a;
		}
	}

	cout << "Matrice " << SIZE << "x" << SIZE << endl;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	//a)

	int sum1 = 0;

	for (int i = 0; i < SIZE-1; i++) {
		for (int j = 0; j < SIZE- (i+1); j++) {
			sum1 += arr[i][j];
		}
	}

	cout << "Sum = " << sum1 << endl;

	//b)
	
	int max[3] = { arr[0][0] };
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < SIZE; i += 2) {
			for (int j = 0; j < SIZE; j++) {
				if (k == 0) {
					if ((arr[i][j] > max[k])) {
						max[k] = arr[i][j];
						cout << max[k] << " ";
					}
				} else if (k == 1) {
					if (arr[i][j] > max[k] && arr[i][j] != max[k - 1]) {
						max[k] = arr[i][j];
					}
				}
				else if (k == 2) {
					if (arr[i][j] > max[k] && arr[i][j] != max[k - 1] && arr[i][j] != max[k - 2]) {
						max[k] = arr[i][j];
					}
				} 
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << "max element " << i << " = " << max[i] << endl;
	}


	//c)

	int leastDigit = arr[0][0];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			
		}
	}

	system("PAUSE");
	return 0;
}
//1.4/2.0
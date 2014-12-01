#include <iostream>
#include <cmath>
using namespace std;

// really??
bool is_even(int a) {
	return !(a % 2);
}

int main() {
	int x;
	cout << "Enter x: " << endl;
	cin >> x;
	if (x <= 0) {
		cout << x*x*x << endl;
	}
	else if (x <= 8) {
		cout << abs(x*x * 5 + 2 * (pow((double)x, 4))) << endl;
	}
	else if (x <= 25) {
		if (x == 9 || x == 16 || x == 25) {
			//sqrt expects double
			// -0.2
			cout << sqrt(x);
		}
		//really?? :D
		//try !!!is_even(x) 
		else if (!is_even(x)) {
			cout << x*(x*x - 1);
		}
		else if (is_even(x)) {
			cout << (x % 10) * (x / 2);
		}
	} 
	else {
		cout << "Your number is not in the range." << endl;
	}

	system("PAUSE");
	return 0;

}

//score 0.8/1.0

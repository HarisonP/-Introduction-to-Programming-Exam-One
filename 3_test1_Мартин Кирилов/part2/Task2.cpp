#include <iostream>
#include <cstring>

using namespace std;
/*
int wordCount(char* str) {
	int count = 0;

	bool isword = false;
	for (int i = 0; i < strlen(str); i++) {
		if (isword && str[i] != ' ') {
			continue;
		}
		else {
			isword = false;
		}

		if (str[i] != ' ') {
			isword = true;
			count++;
		}
	}

	return count;
}


int longestWord(char* str) {
	char* ptr;
	//noo?
	char* ptr2 = 0;
	int wordLen = 0;
	ptr = strtok_s(str, " ", &ptr2);
	while (ptr != 0) {
		if (strlen(ptr) > wordLen) {
			wordLen = strlen(ptr);
		}
		ptr = strtok_s(0, " ", &ptr2);
	}
	return wordLen;
}

void reverseString(char* str) {
	int size = strlen(str);
	for (int i = 0; i < size/2; i++) {
		char temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
	}
}

void reverseAllWords(char* str) {
	//...
}

int main() {
	char str[13] = "asd qwer rty";

	cout << str << endl;

	cout << wordCount(str) << endl;

	cout << longestWord(str) << endl;

	char asd[5] = "asdf";
	reverseString(asd);
	cout << asd << endl;
	

	system("PAUSE");
	return 0;
}
*/

//1.4/2.2
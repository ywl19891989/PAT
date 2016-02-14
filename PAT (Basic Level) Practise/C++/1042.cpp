//============================================================================
// Author      : wenlong
// Copyright   : All copyrights reserved
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <memory.h>
#include <algorithm>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

char lowerCase(char in) {
	if (in >= 'A' && in <= 'Z') {
		return in - 'A' + 'a';
	}
	return in;
}

int main() {

	char inStr[1000 + 1];
	int inNum[26] = { 0 };

	cin.getline(inStr, 1000, '\n');

	int maxIndex = -1;

	for (int i = 0; i < 1000 && inStr[i] != '\0'; i++) {
		char ch = inStr[i];
		ch = lowerCase(ch);
		if (ch >= 'a' && ch <= 'z') {
			int index = ch - 'a';
			inNum[index]++;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (maxIndex == -1) {
			maxIndex = i;
		} else if (inNum[i] > inNum[maxIndex]) {
			maxIndex = i;
		}
	}

	cout << (char) (maxIndex + 'a') << " " << inNum[maxIndex];

	return 0;
}

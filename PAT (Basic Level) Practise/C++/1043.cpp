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

int main() {

	char inStr[10000 + 1] = { 0 };
	int charNum[6] = { 0 };
	char charArr[6] = { 'P', 'A', 'T', 'e', 's', 't' };

	cin >> inStr;

	for (int i = 0; i < 10000 && inStr[i] != '\0'; i++) {
		char ch = inStr[i];
		switch (ch) {
			case 'P':
				charNum[0]++;
				break;
			case 'A':
				charNum[1]++;
				break;
			case 'T':
				charNum[2]++;
				break;
			case 'e':
				charNum[3]++;
				break;
			case 's':
				charNum[4]++;
				break;
			case 't':
				charNum[5]++;
				break;
			default:
				break;
		}
	}

	bool hasVal = true;
	while (hasVal) {
		hasVal = false;
		for (int i = 0; i < 6; i++) {
			if (charNum[i] > 0) {
				cout << charArr[i];
				charNum[i]--;
				hasVal = true;
			}
		}
	}

	return 0;
}

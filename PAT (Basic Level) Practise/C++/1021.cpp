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

	char inData[10000 + 1] = { 0 };

	int inDataNum[10] = { 0 };

	cin >> inData;

	for (int i = 0; i < 1000 && inData[i] != '\0'; i++) {
		int val = inData[i] - '0';
		inDataNum[val]++;
	}

	for (int i = 0; i < 10; ++i) {
		if (inDataNum[i] > 0) {
			printf("%d:%d\n", i, inDataNum[i]);
		}
	}

	return 0;
}

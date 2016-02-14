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

	int inNum[10];
	int val = 0;
	char outNum[51] = { 0 };
	int outIndex = 0;
	int zeroNum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> val;
		inNum[i] = val;
		if (i == 0) {
			zeroNum = val;
		}

		if (i > 0 && val > 0) {
			if (zeroNum > 0) {
				outNum[outIndex] = '0' + i;
				outIndex++;
				val--;
				for (int j = 0; j < zeroNum; j++) {
					outNum[outIndex] = '0';
					outIndex++;
				}
				zeroNum = 0;
			}
			for (int j = 0; j < val; j++) {
				outNum[outIndex] = '0' + i;
				outIndex++;
			}
		}
	}

	cout << outNum;

	return 0;
}

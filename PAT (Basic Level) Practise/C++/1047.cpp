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

	int inData[10000 + 1] = { 0 };

	int n;

	cin >> n;

	int maxIndex = 0;

	for (int i = 0; i < n; i++) {
		int no, temp, score;
		scanf("%d-%d %d", &no, &temp, &score);
		inData[no]+= score;

		if (inData[no] > inData[maxIndex]) {
			maxIndex = no;
		}
	}

	printf("%d %d", maxIndex, inData[maxIndex]);

	return 0;
}

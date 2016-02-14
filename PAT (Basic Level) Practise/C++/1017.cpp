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

	char a[1001] = { 0 };
	int b;
	char q[1001] = { 0 };
	int qIndex = 0;
	int r = 0;

	cin >> a >> b;

	bool isFirst = true;

	for (int i = 0; i < 1000 && a[i] != '\0'; i++) {
		r = r * 10 + (a[i] - '0');
		if (r >= b) {
			q[qIndex] = '0' + r / b;
			qIndex++;
			isFirst = false;
		} else if (!isFirst){
			q[qIndex] = '0';
			qIndex++;
			isFirst = false;
		}
		r = r % b;
	}

	if (isFirst) {
		q[0] = '0';
	}

	cout << q << " " << r;

	return 0;
}

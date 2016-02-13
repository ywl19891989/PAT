//============================================================================
// Author      : wenlong
// Version     :
// Copyright   : All copyrights reserved
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

bool IsPrime(int val) {
	int mid_val = sqrt(val);
	for (int i = 2; i <= mid_val; i++) {
		if (val % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {

	int m, n;

	cin >> m >> n;

	bool isFirst = true;
	int count = 0;
	int index = 1;
	int i = 2;
	while (index <= n) {
		if (IsPrime(i)) {
			if (index >= m && index <= n) {
				if (!isFirst) {
					cout << " ";
				}
				cout << i;
				count++;
				isFirst = false;
				if (count >= 10) {
					count -= 10;
					isFirst = true;
					cout << endl;
				}
			}
			index++;
		}
		i++;
	}

	return 0;
}

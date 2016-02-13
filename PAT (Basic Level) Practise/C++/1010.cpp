//============================================================================
// Name        : 1008.cpp
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

int main() {

	int m, n;

	bool isFirst = true;
	while(cin >> m >> n) {
		if (n != 0 && m != 0) {
			if (!isFirst) {
				printf(" ");
			}
			printf("%d %d", m * n, n - 1);
			isFirst = false;
		} else if (isFirst && n == 0) {
			printf("0 0");
		}
	}

	return 0;
}

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

	long n, a, b, c;
	int i = 0;

	cin >> n;
	while(cin >> a >> b >> c) {
		if (a + b > c) {
			printf("Case #%d: true\n", i + 1);
		} else {
			printf("Case #%d: false\n", i + 1);
		}
		i++;
	}

	return 0;
}

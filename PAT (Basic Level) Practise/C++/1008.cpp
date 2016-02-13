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
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <math.h>

using namespace std;

bool IsPrime(int num) {
	int sqrt_num = sqrt(num);

	for (int i = 2; i <= sqrt_num; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {

	int n, m;
	int * vals;
	cin >> n >> m;
	vals = new int[n];

	for (int i = 0; i < n; i++) {
		int index = i + m;
		cin >> vals[index % n];
	}

	for (int i = 0; i < n; i++) {
		if (i > 0) {
			cout << " ";
		}
		cout << vals[i];
	}

	return 0;
}

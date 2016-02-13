//============================================================================
// Name        : 1007.cpp
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

	int val = 0;

	cin >> val;

	int temp = 3;
	int lastNum = -1;
	int num = 0;
	while(temp <= val) {
		if (IsPrime(temp)){
			if (lastNum != -1 && temp - lastNum == 2) {
				num++;
			}
			lastNum = temp;
		}
		temp++;
	}

	cout << num;

	return 0;
}

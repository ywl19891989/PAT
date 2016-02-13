//============================================================================
// Name        : 1006.cpp
// Author      : wenlong
// Version     :
// Copyright   : All copyrights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>

using namespace std;

int main() {

	int val = 0;
	int digits[3] = { 0 };
	cin >> val;

	int temp = val;

	int index = 0;

	while(temp > 0) {
		int num = temp % 10;
		digits[index] = num;
		temp = temp / 10;
		index++;
	}

	if (digits[2] != 0 ) {
		for(int i = 0; i < digits[2]; i++) {
			cout << "B";
		}
	}

	if (digits[1] != 0 ) {
		for(int i = 0; i < digits[1]; i++) {
			cout << "S";
		}
	}

	if (digits[0] != 0 ) {
		for(int i = 0; i < digits[0]; i++) {
			cout << i + 1;
		}
	}

	return 0;
}

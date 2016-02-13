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
#include <algorithm>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

struct StuInfo {
	int no;
	int s_1;
	int s_2;
};

int getNum(int a, int b) {
	int val = 0;
	while (a > 0) {
		if (a % 10 == b) {
			val *= 10;
			val += b;
		}
		a /= 10;
	}

	return val;
}

int main() {

	int a, da, b, db;

	cin >> a >> da >> b >> db;

	cout << getNum(a, da) + getNum(b, db) ;


	return 0;
}

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

int main() {

	int n, a1, a2, a3, a5;
	float a4;
	int a1_num, a2_num, a3_num, a4_num, a5_num;
	int temp;

	cin >> n;

	a1 = a2 = a3 = a4 = a5 = 0;
	a1_num = a2_num = a3_num = a4_num = a5_num = 0;
	int flag = 1;
	for (int i = 0; i < n; i++) {
		cin >> temp;

		switch (temp % 5) {
			case 0:
				if (temp % 2 == 0) {
					a1 += temp;
					a1_num++;
				}
				break;
			case 1:
				a2 += flag * temp;
				flag = -1 * flag;
				a2_num++;
				break;
			case 2:
				a3++;
				a3_num++;
				break;
			case 3:
				a4 += temp;
				a4_num++;
				break;
			case 4:
				if (temp > a5) {
					a5 = temp;
				}
				a5_num++;
				break;
			default:
				break;
		}
	}

	if (a1_num > 0) {
		printf("%d", a1);
	} else {
		printf("N");
	}

	if (a2_num > 0) {
		printf(" %d", a2);
	} else {
		printf(" N");
	}

	if (a3_num > 0) {
		printf(" %d", a3);
	} else {
		printf(" N");
	}

	if (a4_num > 0) {
		printf(" %.1f", a4 / a4_num);
	} else {
		printf(" N");
	}

	if (a5_num > 0) {
		printf(" %d", a5);
	} else {
		printf(" N");
	}

	return 0;
}

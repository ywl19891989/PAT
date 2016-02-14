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

	int n;
	int a[3] = { 0 };
	int a_flag[3] = { 0 };
	int b[3] = { 0 };
	int b_flag[3] = { 0 };
	char c1[3] = { 'C', 'J', 'B' };
	char c2[3] = { 'J', 'B', 'C' };
	char c3[3] = { 'B', 'C', 'J' };

	cin >> n;

	char t1, t2;
	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2;
		if (t1 == t2) {
			a[1]++;
			b[1]++;
		} else {
			for (int j = 0; j < 3; j++) {
				if (t1 == c1[j]) {
					if (t2 == c2[j]) {
						a_flag[j]++;
						a[0]++;
						b[2]++;
					} else {
						b_flag[j]++;
						a[2]++;
						b[0]++;
					}
				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		if (i > 0) {
			cout << " ";
		}
		cout << a[i];
	}

	cout << endl;

	for (int i = 0; i < 3; i++) {
		if (i > 0) {
			cout << " ";
		}
		cout << b[i];
	}

	cout << endl;

	int maxAIndex = 0;
	int maxBIndex = 0;
	for (int i = 0; i < 3; i++) {
		if (a_flag[i] > a_flag[maxAIndex]) {
			maxAIndex = i;
		} else if (a_flag[i] == a_flag[maxAIndex] && c1[i] < c1[maxAIndex]) {
			maxAIndex = i;
		}
		if (b_flag[i] > b_flag[maxBIndex]) {
			maxBIndex = i;
		} else if (b_flag[i] == b_flag[maxBIndex] && c3[i] < c3[maxBIndex]) {
			maxBIndex = i;
		}
	}

	cout << c1[maxAIndex] << " " << c3[maxBIndex];

	return 0;
}

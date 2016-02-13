//============================================================================
// Name        : 1005.cpp
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

	int num = 0, val = 0;
	int num_map[5001] = { 0 };
	int key_map[5001] = { 0 };
	int i = 0;

	cin >> num;
	while (i < num) {
		i++;

		cin >> val;

		if (num_map[val] != 1) {
			key_map[val] = 1;
			while (val != 1) {
				num_map[val] = 1;
				if (val % 2 == 1) {
					val = 3 * val + 1;
					val = val / 2;
				} else {
					val = val / 2;
				}

				if (key_map[val] == 1) {
					key_map[val] = 0;
				}
			}
		}
	}

	bool isFirstOut = true;

	for (i = 100; i >= 0; i--) {
		if (key_map[i] == 1) {
			if (!isFirstOut) {
				cout << " ";
			}
			cout << i;
			isFirstOut = false;
		}
	}

	return 0;
}

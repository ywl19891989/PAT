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

	char inStr[4][61];

	for (int i = 0; i < 4; i++) {
		cin >> inStr[i];
	}

	const char* weeks[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	int sameWeekIndex = 0;
	int weekIndex = -1;
	int sameHourIndex = 0;
	int hourIndex = 0;
	int minIndex = 0;
	for (int i = 0; i < 60; i++) {
		if (inStr[0][i] == inStr[1][i]) {

			if (inStr[0][i] >= 'A' && inStr[0][i] <= 'G') {
				sameWeekIndex++;

				if (sameWeekIndex == 1) {
					weekIndex = inStr[0][i] - 'A';
				}
			}

			if (weekIndex != -1 && ((inStr[0][i] >= 'A' && inStr[0][i] <= 'N')
					|| (inStr[0][i] >= '0' && inStr[0][i] <= '9'))) {
				sameHourIndex++;

				if (sameHourIndex == 2) {
					if (inStr[0][i] >= 'A' && inStr[0][i] <= 'N') {
						hourIndex = inStr[0][i] - 'A' + 10;
					} else {
						hourIndex = inStr[0][i] - '0';
					}

					break;
				}
			}

		}
	}


	for (int i = 0; i < 60; i++) {
		if (inStr[2][i] == inStr[3][i] && ((inStr[2][i] >= 'A' && inStr[2][i] <= 'Z')
				|| (inStr[2][i] >= 'a' && inStr[2][i] <= 'z'))) {
			minIndex = i;
			break;
		}
	}

	printf("%s %02d:%02d", weeks[weekIndex], hourIndex, minIndex);

	return 0;
}

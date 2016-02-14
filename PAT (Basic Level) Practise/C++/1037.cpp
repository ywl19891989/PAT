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

	int p[3], p_all;
	int a[3], a_all;

	scanf("%d.%d.%d %d.%d.%d", &p[0], &p[1], &p[2], &a[0], &a[1], &a[2]);
	p_all = p[0] * 17 * 29 + p[1] * 29 + p[2];
	a_all = a[0] * 17 * 29 + a[1] * 29 + a[2];

	int diff = a_all - p_all;

	int flag = diff < 0 ? -1 : 1;
	diff = diff * flag;

	int out[3];
	out[2] = diff % 29;
	diff = diff / 29;
	out[1] = diff % 17;
	diff = diff / 17;
	out[0] = diff;

	printf("%d.%d.%d", flag * out[0], out[1], out[2]);

	return 0;
}

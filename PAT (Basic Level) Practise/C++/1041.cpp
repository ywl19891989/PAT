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

struct StuInfo {
	char no[15];
	int s_1;
	int s_2;
};

int main() {

	StuInfo inData[1000 + 1] = { 0 };
	int n = 0, m = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		StuInfo temp;
		cin >> temp.no >> temp.s_1 >> temp.s_2;
		inData[temp.s_1] = temp;
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		int no = 0;
		cin >> no;
		StuInfo temp = inData[no];
		cout << temp.no << " " << temp.s_2 << endl;
	}

	return 0;
}

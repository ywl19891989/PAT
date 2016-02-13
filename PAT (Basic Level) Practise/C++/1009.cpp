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
#include <string>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <vector>
#include <math.h>

using namespace std;

int main() {

	char allStrs[81];

	gets(allStrs);

	std::vector<std::string> ret;

	int size = strlen(allStrs);

	std::string temp = "";
	for (int i = 0; i < size; i++) {
		if (allStrs[i] == ' ') {
			ret.push_back(temp);
			temp = "";
		} else {
			temp = temp + allStrs[i];
		}
	}
	ret.push_back(temp);

	for (int i = 0; i < ret.size(); i++) {
		if (i > 0) {
			printf(" %s", ret[ret.size() - 1 - i].c_str());
		} else {
			printf("%s", ret[ret.size() - 1 - i].c_str());
		}
	}

	return 0;
}

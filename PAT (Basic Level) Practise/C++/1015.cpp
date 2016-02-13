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

/**
 * 输入第1行给出3个正整数，分别为：
 * N（<=105），即考生总数；
 * L（>=60），为录取最低分数线，即德分和才分均不低于L的考生才有资格被考虑录取；
 * H（<100），为优先录取线
 * 				德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
 * 				才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
 * 				德才分均低于H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
 * 				其他达到最低线L的考生也按总分排序，但排在第三类考生之后。
 * **/

struct StuInfo {
	int no;
	int s_1;
	int s_2;
};

int N, L, H;

int cmp(StuInfo a, StuInfo b) {
	if (a.s_1 + a.s_2 == b.s_1 + b.s_2) {
		if (a.s_1 != b.s_1) {
			return a.s_1 > b.s_1;
		} else {
			return a.no < b.no;
		}
	}
	return a.s_1 + a.s_2 > b.s_1 + b.s_2;
}

int main() {

	cin >> N >> L >> H;

	std::vector<StuInfo> allStus, stu1, stu2, stu3, stu4;

	for (int i = 0; i < N; i++) {
		StuInfo info;
		cin >> info.no >> info.s_1 >> info.s_2;
		if (info.s_1 >= L && info.s_2 >= L) {
			if (info.s_1 >= H && info.s_2 >= H) {
				stu1.push_back(info);
			} else if (info.s_1 >= H) {
				stu2.push_back(info);
			} else if (info.s_1 >= info.s_2) {
				stu3.push_back(info);
			} else {
				stu4.push_back(info);
			}
		}
	}

	std::sort(stu1.begin(), stu1.end(), cmp);
	std::sort(stu2.begin(), stu2.end(), cmp);
	std::sort(stu3.begin(), stu3.end(), cmp);
	std::sort(stu4.begin(), stu4.end(), cmp);

	cout << stu1.size() + stu2.size() + stu3.size() + stu4.size() << endl;

	for (int i = 0; i < stu1.size(); i++) {
		StuInfo info = stu1[i];
		printf("%d %d %d\n", info.no, info.s_1, info.s_2);
	}
	for (int i = 0; i < stu2.size(); i++) {
		StuInfo info = stu2[i];
		printf("%d %d %d\n", info.no, info.s_1, info.s_2);
	}
	for (int i = 0; i < stu3.size(); i++) {
		StuInfo info = stu3[i];
		printf("%d %d %d\n", info.no, info.s_1, info.s_2);
	}
	for (int i = 0; i < stu4.size(); i++) {
		StuInfo info = stu4[i];
		printf("%d %d %d\n", info.no, info.s_1, info.s_2);
	}

	return 0;
}

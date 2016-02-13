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
 * �����1�и���3�����������ֱ�Ϊ��
 * N��<=105����������������
 * L��>=60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־�������L�Ŀ��������ʸ񱻿���¼ȡ��
 * H��<100����Ϊ����¼ȡ��
 * 				�·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
 * 				�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
 * 				�²ŷ־�����H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
 * 				�����ﵽ�����L�Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��
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

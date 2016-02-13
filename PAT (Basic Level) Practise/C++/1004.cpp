#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

struct StuInfo {
    char    name[11];
    char    no[11];
    int     score;
};

int stu_cmp(StuInfo* a, StuInfo* b) {
    return a->score > b->score;
}

int main()
{
    int num, i = 0;
    StuInfo ** allStus;

    cin >> num;
    allStus = new StuInfo*[num];
    while(i < num) {
        allStus[i] = new StuInfo;
        StuInfo* curInfo = allStus[i];
        cin >> curInfo->name >> curInfo->no >> curInfo->score;
        i++;
    }

    std::sort(allStus, allStus + num, stu_cmp);

    cout << allStus[0]->name  << " " << allStus[0]->no << endl;
    cout << allStus[num - 1]->name  << " " << allStus[num - 1]->no;

    return 0;
}

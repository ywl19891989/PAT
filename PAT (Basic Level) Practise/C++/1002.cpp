#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char nums[101];
    int indexMap[10];
    const char* valMap[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> nums;

    int val = 0;
    int i = 0;
    while(nums[i] != '\0') {
        val += (nums[i] - '0');
        i++;
    }

    int temp = val;
    int count = 0;
    while (temp != 0) {
        int curVal = temp % 10;
        indexMap[count] = curVal;
        count++;
        temp = temp / 10;
    }

    bool isFirst = true;
    while (count > 0) {
        if (!isFirst) {
            cout << " ";
        }
        count--;
        cout << valMap[indexMap[count]];
        isFirst = false;
    }

    return 0;
}

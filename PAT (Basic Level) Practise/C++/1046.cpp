#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num, num_a, num_b;
    num_a = 0;
    num_b = 0;
    int a_num, a_total, b_num, b_total;
    int total;
    cin >> num;
    while(num > 0) {
        cin >> a_num >> a_total >> b_num >> b_total;
        total = a_num + b_num;
        if (total == a_total && total != b_total) {
            num_b++;
        } else if (total == b_total && total != a_total) {
            num_a++;
        }

        num--;
    }

    cout << num_a << " " << num_b;

    return 0;
}

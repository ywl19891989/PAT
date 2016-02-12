#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n != 1) {
        count += 1;
        if (n % 2 == 1) {
            n = 3 * n + 1;
        }

        n = n / 2;
    }
    cout << count;
    return 0;
}

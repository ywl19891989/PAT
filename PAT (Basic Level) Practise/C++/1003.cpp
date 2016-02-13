#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num, p_index, a_index, t_index, total_len;
    char str_buf[101];
    cin >> num;

    while(num > 0) {
        cin >> str_buf;

        p_index = a_index = t_index = -1;
        total_len = 0;
        bool isValid = true;
        for (int i = 0; i < 101 && str_buf[i] != '\0'; i++) {
            total_len++;
            if (str_buf[i] != 'P' && str_buf[i] != 'A' && str_buf[i] != 'T') {
                isValid = false;
                break;
            }
            if (str_buf[i] == 'P') {
                if (p_index == -1) {
                    p_index = i;
                } else {
                    isValid = false;
                    break;
                }
            }
            if (str_buf[i] == 'A') {
                a_index = i;
            }
            if (str_buf[i] == 'T') {
                if (t_index == -1) {
                    t_index = i;
                } else {
                    isValid = false;
                    break;
                }
            }
        }

        if (!isValid) {
            cout << "NO" << endl;
        }else if (a_index == -1 || p_index == -1 || t_index == -1) {
            cout << "NO" << endl;
        } else if (p_index > t_index) {
            cout << "NO" << endl;
        } else {
            int pre_a = p_index;
            int mid_a = t_index - p_index - 1;
            int suf_a = total_len - t_index - 1;

            if (mid_a > 0 && pre_a * mid_a == suf_a) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }

        num--;
    }

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int l, c, ans_cnt;
char let[30], ans[30];

void func(int s, int left) {
    if (left == 0) {
        if (yuan >= 1 && fu >= 2) {
            for (int i = 0; i < ans_cnt; i++) {
                cout << ans[i];
            }
            cout << endl;
            cnt++
        }
    }
    for (int i = s; i < c; i++) {
        ans[cnt++] = let[i];
        if (let[i] == 'a' || let[i] == 'e' || let[i] == 'o' || let[i] == 'i' || let[i] == 'u') {
            yuan++;
            f = 1;
        } else {
            
        }
    }
}

int main() {

    return 0;
}

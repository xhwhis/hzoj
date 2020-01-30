#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt_man = 0, cnt_woman = 0;
    long long ans = 0;
    int cnt_qq = 0;
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        if (a == 'i') {
            char num[25];
            cin >> num;
            int len = strlen(num);
            if ((num[len - 2] - '0') & 1) cnt_man++;
            else cnt_woman++;
        } else {
            cnt_qq++;
            long long num = 0;
            cin >> num;
            ans += num;
        }
    }
    if (cnt_qq > 0) {
        ans = ans / cnt_qq;
    }
    cout << cnt_man << " " << cnt_woman << " " <<  ans;
    
    return 0;
}

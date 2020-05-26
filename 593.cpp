#include <iostream>
using namespace std;

char str[3005];
int mem[10000];
int ans[10000];

int main() {
    int n, m;
    cin >> n >> m >> &str[1];
    for (int i = 1; i < n >> 1; i++) {
        int same = 0;
        for (int j = 1, k = i + 1; j <= i; j++, k++) {
            if (str[j] == str[k]) same++;
        }
        ans[same]++;
        for (int j = 2; j + (i << 1) - 1 <= n; j++) {
            if (str[j - 1] == str[j + i - 1]) same--;
            if (str[j + i - 1] == str[j + (i << 1) - 1]) same++;
            ans[same]++;
        }
        mem[i] = same;
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (t == 2) {
            cin >> t;
            cout << ans[t] << endl;
            continue;
        }
        char l;
        cin >> l;
        str[++n] = l;
        if (n % 2 == 0) {
            int same = 0, mid = n >> 1;
            for (int j = 1, k = mid + 1; j <= mid; j++, k++) {
                if (str[j] == str[k]) same++;
            }
            ans[same]++;
            mem[mid] = same;
        }
        for (int j = 1; j <= (n - 1) >> 1; j++) {
            if (str[n - (j << 1)] == str[n - j]) {
                mem[j]--;
            }
            if (str[n] == str[n - j]) {
                mem[j]++;
            }
            ans[mem[j]]++;
        }
    }
    return 0;
}

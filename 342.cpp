#include <iostream>
#include <cstring>
using namespace std;
#define MAX_N 30

int a[6];

int solve() {
    memset(a, 0, sizeof(a));
    int k;
    cin >> k;
    if (k == 0) return k;
    for (int i = 0; i < k; i++) cin >> a[i];
    long long dp[a[0] + 1][a[1] + 1][a[2] + 1][a[3] + 1][a[4] + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0][0][0][0] = 1;
    for (int i1 = 0; i1 <= a[0]; i1++) {
        for (int i2 = 0; i2 <= a[1]; i2++) {
            for (int i3 = 0; i3 <= a[2]; i3++) {
                for (int i4 = 0; i4 <= a[3]; i4++) {
                    for (int i5 = 0; i5 <= a[4]; i5++) {
                        if (i1 >= i2 && i1 >= i3 && i1 >= i4 && i1 >= i5 && i1 < a[0]) {
                            dp[i1 + 1][i2][i3][i4][i5] += dp[i1][i2][i3][i4][i5];
                        }
                        if (i2 >= i3 && i2 >= i4 && i2 >= i5 && i2 < a[1]) {
                            dp[i1][i2 + 1][i3][i4][i5] += dp[i1][i2][i3][i4][i5];
                        }
                        if (i3 >= i4 && i3 >= i5 && i3 < a[2]) {
                            dp[i1][i2][i3 + 1][i4][i5] += dp[i1][i2][i3][i4][i5];
                        }
                        if (i4 >= i5 && i4 < a[3]) {
                            dp[i1][i2][i3][i4 + 1][i5] += dp[i1][i2][i3][i4][i5];
                        }
                        if (i5 < a[4]) {
                            dp[i1][i2][i3][i4][i5 + 1] += dp[i1][i2][i3][i4][i5];
                        }
                    }
                }
            }
        }
    }
    cout << dp[a[0]][a[1]][a[2]][a[3]][a[4]] << endl;
    return k;
}

int main() {
    while (solve()) ;
    return 0;
}

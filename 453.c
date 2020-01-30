#include <stdio.h>
#define max_n 30000

int num[max_n + 5] = {0};

int main() {
    int n, k, cnt = 0;
    scanf ("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf ("%d", &temp);
        if (!num[temp]) {
            num[temp] = 1;
            cnt++;
        }
    }
    if (k > cnt) {
        printf ("NO RESULT");
    } else {
        int ans = 0;
        for (int i = 1; i < max_n; i++) {
            if (num[i]) ans++;
            if (ans == k) {
                printf ("%d", i);
                break;
            }
        }
    }
    return 0;
}

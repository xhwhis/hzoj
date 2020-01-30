#include <stdio.h>

int ans[105] = {0};

int main() {
    int n, grade, cnt = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf ("%d", &temp);
        ans[temp]++;
    }
    for (int i = 100; i >= 0; i--) {
        cnt += ans[i];
        if (cnt > n / 2) {
            grade = i;
            break;
        }
    }
    printf ("%d %d", grade, cnt);
    return 0;
}

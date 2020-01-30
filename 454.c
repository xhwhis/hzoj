#include <stdio.h>
#define max_n 1000

int ans[max_n + 5] = {0};

int main() {
    int n, cnt = 0;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf ("%d", &temp);
        if (!ans[temp]) {
            ans[temp] = 1;
            cnt++;
        }
    }
    printf ("%d\n", cnt);
    int flag = 0;
    for (int i = 0; i <= max_n; i++) {
        if (ans[i]) {
            flag && printf(" ");
            printf ("%d", i);
            flag = 1;
        }
    }
    return 0;
}

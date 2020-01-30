#include <stdio.h>
#define max_l 10000

int flag[max_l + 5] = {0};

int main() {
    int L, M;
    scanf ("%d%d", &L, &M);
    for (int i = 0; i < M; i++) {
        int left, right;
        scanf ("%d%d", &left, &right);
        for (int j = left; j <= right; j++) {
            flag[j] = 1;
        }
    }
    int ans = L + 1;
    for (int i = 0; i <= L; i++) {
        if (flag[i]) ans--;
    }
    printf ("%d\n", ans);
    return 0;
}

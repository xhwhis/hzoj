#include <stdio.h>

int ans[30][4462] = {1};

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i < n; i++) {
        int ind = 0;
        for (int j = 0; ans[i - 1][j]; j++) {
            int x = 1;
            while (ans[i - 1][j] == ans[i - 1][j + 1]) {
                x++, j++;
            }
            ans[i][ind++] = x;
            ans[i][ind++] = ans[i - 1][j];
        }
    }
    for (int i = 0; ans[n - 1][i]; i++) {
        printf ("%d", ans[n - 1][i]);
    }
    return 0;
}

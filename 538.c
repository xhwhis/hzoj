#include <stdio.h>

int n, num[25][25], check[25], flag;

void func(int x) {
    if (flag) printf ("-");
    flag = 1;
    printf ("%d", x);
    for (int i = 1; i <= n; i++) {
        if (num[x][i] == 1 && check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }
}

int main() {
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf ("%d", &num[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            check[i] = 1;
            func(i);
        }
    }
    return 0;
}

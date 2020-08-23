#include <stdio.h>

int ans[1000][1000];
int num[10] = {0, 1, 3, 9, 27, 81, 243, 729};

void func(int x, int y, int n) {
    if (n == 1) {
        ans[x][y] = 1;
        return ;
    }
    func(x, y, n - 1);
    func(x, y + num[n] / 3 * 2, n - 1);
    func(x + num[n] / 3 * 2, y, n - 1);
    func(x + num[n] / 3 * 2, y + num[n] / 3 * 2, n - 1);
    func(x + num[n] / 3, y + num[n] / 3, n - 1);
}

int main() {
    func(1, 1, 7);
    int n;
    while (~scanf("%d", &n) && n + 1) {
        for (int i = 1; i <= num[n]; i++) {
            for (int j = 1; j <= num[n]; j++) {
                if (ans[i][j]) printf ("X");
                else printf (" ");
            }
            printf ("\n");
        }
        printf ("-\n");
    }
    return 0;
}

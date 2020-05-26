#include <stdio.h>

int n, m, sx, sy, ans = 1;
char map[3005][3005];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
int check[3005][3005];

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (tx < 1 || ty < 1 || tx > n || ty > m) continue;
        if (map[tx][ty] != map[x][y] && !check[tx][ty]) {
            check[tx][ty] = 1;
            ans++;
            dfs(tx, ty);
        }
    }
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf ("%s", &map[i][1]);
    }
    scanf ("%d%d", &sx, &sy);
    check[sx][sy] = 1;
    dfs(sx, sy);
    printf ("%d\n", ans);
    return 0;
}

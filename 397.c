#include <stdio.h>

int n, m, ans;
int map[105][105];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (map[tx][ty]) {
            map[tx][ty] = 0;
            dfs(tx, ty);
        }
    }
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf ("%d", &map[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j]) {
                ans++;
                dfs(i, j);
            }
        }
    }
    printf ("%d\n", ans);
    return 0;
}

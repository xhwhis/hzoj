#include <stdio.h>

int n, m, sx, sy, ans = 1;
char map[55][55];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (map[tx][ty] == '.') {
            map[tx][ty] = 0;
            ans++;
            dfs(tx, ty);
        }
    }
    return ;
}

int main() {
    scanf ("%d%d", &m, &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf ("%c", &map[i][j]);
            if (map[i][j] == '@') sx = i, sy = j;
        }
    }
    dfs(sx, sy);
    printf ("%d\n", ans);
    return 0;
}

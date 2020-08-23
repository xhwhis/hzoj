#include <stdio.h>

int n, m, num = 1, max;
char map[105][105];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (map[tx][ty] == '1') {
            map[tx][ty] = '0';
            num++;
            dfs(tx, ty);
        }
    }
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf ("%c", &map[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] == '1') {
                dfs(i, j);
                if (max < num) max = num;
                num = 1;
            }
        }
    }
    printf ("%d\n", max);
    return 0;
}

#include <stdio.h>

int n, m, sx, sy;
char mmap[505][505];
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

int func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (mmap[tx][ty] == 'g') return 1;
        if (mmap[tx][ty] == '.') {
            mmap[tx][ty] = '*';
            if (func(tx, ty)) return 1;
        }
    }
    return 0;
}

int main() {
    scanf ("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf ("%c", &mmap[i][j]);
            if (mmap[i][j] == 's') sx = i, sy = j;
        }
    }
    printf ("%s", func(sx, sy) ? "Yes" : "No");
    return 0;
}

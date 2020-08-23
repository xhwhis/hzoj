#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y;
};

int n, m, k, ans;
char map[3005][3005];
int check[3005][3005];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
queue<node> q;

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0], ty = y + dir[i][1];
        if (check[tx][ty] == 0 && map[tx][ty] != map[x][y] && map[tx][ty]) {
            ans++;
            check[tx][ty] = 1;
            q.push({tx, ty});
            dfs(tx, ty);
        }
    }
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> &map[i][1];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (check[i][j] == 0) {
                ans = 1;
                check[i][j] = 1;
                q.push({i, j});
                dfs(i, j);
                while (!q.empty()) {
                    check[q.front().x][q.front().y] = ans;
                    q.pop();
                }
            }
        }
    }
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        cout << check[a][b] << endl;
    }
    return 0;
}

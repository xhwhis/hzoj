#include <iostream>
#include <queue>
using namespace std;

int n, m, x, y;
int ans[405][405];
int dir[8][2] = {1, 2, 1, -2, 2, 1, 2, -1, -1, 2, -1, -2, -2, 1, -2, -1};

struct node {
    int x, y, step;
};

int main() {
    cin >> n >> m >> x >> y;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            que.push({i, j, 0});
            ans[i][j] = -1;
        }
    }
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0], y = tmp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m || ans[x][y]) continue;
            ans[x][y] = tmp.step + 1;
            que.push({x, y, ans[x][y]});
        }
    }
    ans[x][y] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j != 1) cout << " ";
            if (ans[i][j] == -1) {
                cout << 0;
            } else {
                cout << ans[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

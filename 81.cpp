#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, s;
};

int n, m;
char mmap[2005][2005];
int dir[4][2] = {1, 0, 0, 1, 0, -1, -1, 0};

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'S') {
                que.push({i, j, 0, 0});
                check[i][j] = 1;
            }
        }
    }
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0], y = tmp.y + dir[i][1];
            if (tmp.f == 0 && check[x][y] & 1) continue;
            if (tmp.f == 1 && check[x][y] & 2) continue;
            if (tmp.f == 1 && mmap[x][y] == 'T')  {
                cout << tmp.s + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.' || mmap[x][y] == 'S' || mmap[x][y] == 'T') {
                que.push({x, y, tmp.s + 1, tmp.f});
                check[x][y] += tmp.f + 1;
            }
            if (mmap[x][y] == 'p') {
                que.push({x, y, tmp.s + 1, 1});
                check[x][y] = 3;
            }
        }
    }
    return 0;
}

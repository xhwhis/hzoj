#include <iostream>
#include <queue>
using namespace std;

struct node {
    int x, y, step;
};

int n, m, x, y;
char mmap[105][105];
int dir[8][2] = {1, 0, 0, 1, -1, 0, 0, -1, 1, 1, 1, -1, -1, 1, -1, -1};

int main() {
    cin >> m >> n >> y >> x;
    for (int i = 1; i <= n; i++) {
        cin >> &mmap[i][1];
    }
    queue<node> que;
    que.push({n - x + 1, y, 0});
    mmap[n - x + 1][y] = '*';
    int ans;
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        ans = tmp.step;
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0], y = tmp.y + dir[i][1];
            if (x)
        }
    }
}

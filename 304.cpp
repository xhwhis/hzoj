#include <iostream>
using namespace std;

struct node {
    int x, y, step;
}

int n, m;
char mmap[155][155];
int dir[8][2]= {1, 2, 1, -2, 2, 1, 2, -1, -1, 2, -1, -2, -2, 1, -2 , -1};

int main() {
    cin >> m >> n;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'K') {
                que.push({i, j, 0});
            }
        }
    }
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = tmp.x + dir[i][0], y = tmp.y + dir[i][1];
            
        }
    }
    return 0;
}

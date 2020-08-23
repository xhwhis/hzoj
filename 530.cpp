#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct node {
    int x, y;
};

int n, m, cnt;
char mmap[55][55];
int check[55][55];
int dir[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1};

int main() {
    cin >> n >> m;
    queue<node> que;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '*') {
                que.push({i, j});
                mmap[i][j] = '.';
                check[i][j] = 1;
            }
        }
    }
    cin >> cnt;
    while (cnt--) {
        string str;
        cin >> str;
        int dir_num;
        switch (t) {
            case "NORTH": dir_num = 0; break;
            case "SOUTH": dir_num = 1; break;
            case "WEST": dir_num = 2; break;
            case "EAST": dir_num = 3; break;
        }
        memset(check, 0, sizeof(check));
        int times = que.size();
        for (int i = 0; i < times; i++) {
            node temp = que.front();
            que.pop();
            for (int j = 1; ; j++) {
                int x = temp.x + j * dir[dir_num][0], y = temp.y + j * dir[dir_num][1];
                if (mmap[i][j] != '.') break;
                if (check[x][y]) continue;
                que.push({x, y});
                check[x][y] = 1;
            }
        }
    }
    while ()
    return 0;
}

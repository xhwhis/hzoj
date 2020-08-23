#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int n, m, check[133][133];
char mmap[133][133];
int dir[8][2] = {0, 1, 1, 0, 0, -1, -1, 0, 1, 1, 1, -1, -1, -1};

int func() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (!a) return 0;
    memset(check, 0, sizeof(check));
    for (int i = 0; i < 8; i++) {
        for (int j = 1; ; j++) {
            int x = c + j * dir[i][0], y = :wq
        }
    }
}

int main() {
    
    return 0;
}

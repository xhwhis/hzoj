#include <iostream>
#include <cstring>
#define max_n 50
using namespace std;

int arr[max_n + 5][max_n + 5];
int val[max_n + 5][max_n + 5][max_n + 5][max_n + 5];
int n, m;

int dfs(int i, int j, int p, int q) {
    if (i > n || j > m - 1 || p > n- 1 || q > m) return 0;
    if (i == p && j == q) return 0;
    if (val[i][j][p][q] != -1) return val[i][j][p][q];
    return val[i][j][p][q] = max(max(dfs(i + 1, j, p + 1, q), dfs(i + 1, j, p, q+1)),
								 max(dfs(i, j + 1, p + 1, q), dfs(i, j + 1, p, q + 1))) + arr[i][j] + arr[p][q];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    memset(val, -1, sizeof(val));
    cout << dfs(2, 1, 1, 2);
    return 0;
}

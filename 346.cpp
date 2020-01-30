#include <iostream>
#define max_n 50
using namespace std;

int matrix[max_n + 5][max_n + 5];
int val[max_n + 5][max_n + 5][max_n + 5][max_n + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int p = 1; p <= n; p++) {
                int q;
                if (i + j > p) {
                    q = i + j - p;
                } else continue;
                val[i][j][p][q] = max(max(val[i - 1][j][p - 1][q], val[i - 1][j][p][q - 1]), max(val[i][j - 1][p - 1][q], val[i][j - 1][p][q - 1])) + matrix[i][j] + matrix[p][q];
                if (i == p && j == q) {
                    val[i][j][p][q] -= matrix[p][q];
                }
            }
        }
    }
    cout << val[n][m][n][m];
    return 0;
}

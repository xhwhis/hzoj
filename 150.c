#include <stdio.h>
#define max 200

int main() {
	int matrix[max + 5][max + 5];
	int n, m;
	scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
	for(int i = 0, k = m;i < m; i++,k--) {
        for(int j = 0; j < n; j++) {
            printf("%d", matrix[n-j-1][m-k]);
            if (j != n - 1) printf (" ");
            else printf ("\n");
        }
    }
    return 0;
}

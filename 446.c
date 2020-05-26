#include <stdio.h>

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int p = i, q = j;
            if (i > (n + 1) / 2) p = n - i + 1;
            if (j > (n + 1) / 2) q = n - j + 1;
            int  temp = p < q ? p : q;
            if (temp < 0) temp = -temp;
            printf ("%d", temp);
			if (j - n) printf (" ");
        }
        printf ("\n");
    }
    return 0;
}

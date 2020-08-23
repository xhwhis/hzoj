#include <stdio.h>

int main() {
    int y, m, d;
    scanf ("%d%d%d", &y, &m, &d);
    if (m <= 2) {
        m += 12;
        y--;
    }
    int h = (d + 26 * (m + 1) / 10 + y % 100 + y % 100 / 4 + y / 100 / 4 + 5 * (y / 100)) % 7;
	int num[7] = {6, 7, 1, 2, 3, 4, 5};
	printf ("%d", num[h % 7]);
    return 0;
}

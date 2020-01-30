#include <stdio.h>
#define max_n 1000000

char nums[max_n + 10];

void init() {
    int a = 0;
    for (int i = 0; i <= 185186; i++) {
        a += sprintf (nums + a, "%d", i);
    }
}

int main() {
    init();
    int x, y, z;
    scanf ("%d%d%d", &x, &y, &z);
    printf ("%d", (nums[x] - '0') * (nums[y] - '0') * (nums[z] - '0'));
    return 0;
}

#include <stdio.h>
#include <string.h>
#define max_n 10000

char qq[max_n + 5][20];
char id[max_n + 5][20];

int get_num(int x, int n) {
    int num = 0;
    for (int i =0; i < n; i++) {
        int len = strlen(id[i]);
        if (id[i][len - 2] % 2 == x) num++;
    }
    return num;
}

long long get_avg(int n) {
    if (n == 0) return 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; qq[i][j]; j++) {
            sum = sum * 10 + (qq[i][j] - '0');
        }
    }
    return sum / n;
}

int main() {
    int n;
    scanf ("%d", &n);
    getchar();
    char ch;
    int p = 0, q = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%c", &ch);
        getchar();
        if (ch == 'i') {
            scanf ("%s", id[p++]);
        } else {
            scanf ("%s", qq[q++]);
        }
    }
    int man = get_num(1, p);
    int woman = get_num(0, p);
    int avg = get_avg(q);
    printf("%d %d %d", man, woman, avg);
    return 0;
}

#include <stdio.h>

int n, num[10], cnt, mark[10];

void func(int left) {
    if (left == 0) {
        for (int i = 0; i < cnt; i++) {
            i && printf (" ");
            printf ("%d", num[i]);
        }
        printf ("\n");
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (mark[i] == 0) {
            mark[i] = 1;
            num[cnt] = i;
            cnt++;
            func(left - 1);
            cnt--;
            mark[i] = 0;
        }
    }
    return ;
}

int main() {
    scanf ("%d", &n);
    func(n);
    return 0;
}

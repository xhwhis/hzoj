#include <stdio.h>

int n, num[15], cnt;

void print() {
    for (int i = 0; i < cnt; i++) {
        i && printf (" ");
        printf ("%d", num[i]);
    }
    printf ("\n");
    return ;
}

void func(int s) {
    for (int i = s; i <= n; i++) {
        num[cnt++] = i;
        print();
        func(i + 1);
        cnt--;
    }
    return ;
}

int main() {
    scanf ("%d", &n);
    func(1);
    return 0;
}

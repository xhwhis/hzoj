#include <stdio.h>

char str[100005];
int num[64], num2[10] = {1, 2, 4, 8, 16, 32};
long long ans = 1;

int main() {
    scanf ("%s", str);
    for (int i = 0; i < 64; i++) {
        int tmp = i;
        for (int j = 5; j >= 0; j--) {
            if (tmp >= num2[j]) num[i]++, tmp -= num2[j];
        }
    }
    for (int i = 0; str[i]; i++) {
        int tmp;
        if (str[i] >= '0' && str[i] <= '9') {
            tmp = str[i] - '0';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            tmp = str[i] -'A' + 10;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            tmp = str[i] - 'a' + 36;
        } else if (str[i] == '-') {
            tmp = 62;
        } else {
            tmp = 63;
        }
        tmp = 6 - num[tmp];
        for (int i = 0; i < tmp; i++) {
            ans = ans * 3 % 1000000007;
        }
    }
    printf ("%lld\n", ans);
    return 0;
}

#include <stdio.h>
#include <string.h>
#define max_n 1000

int before, after;
char before_num[max_n + 5] = {0};
int after_num[max_n + 5] = {0}, ans_num[max_n + 5] = {0};

int cton(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 10;
    } else {
        return ch - 'a' + 36;
    }
}

char ntoc(int num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    } else if (num >= 10 && num <= 35) {
        return num - 10 + 'A';
    } else {
        return num - 36 + 'a';
    }
}

int ntom() {
    int before_len = strlen(before_num);
    int after_len, ans_len;
    while (before_len >= 1) {
        int num = 0;
        after_len = before_len;
        for (int i = 0; i < before_len; i++) {
            num = num * before + cton(before_num[i]);
            after_num[i] = num / after;
            num %= after;
        }
        ans_num[after_len++] = num;
        int flag = 1;
        while (flag <= after_len && after_num[flag] == 0) flag++;
        //memset(before_num, 0, sizeof(before_num));
        before_len = 0;
        for (int i = flag; i < before_len; i++) {
            before_num[++before_len] = after_num[i];
        }
        memset(after_num, 0, sizeof(after_num));
        after_len = 0;
    }
    return ans_len;
}

int main() {
    scanf ("%d %d %s", &before, &after, before_num);
    printf ("%d %s\n%d ", before, before_num, after);
    int len = ntom();
    for (int i = len - 1; i >= 0; i--) {
        printf ("%c", ntoc(ans_num[i]));
    }
    return 0;
}

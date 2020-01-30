#include <stdio.h>
#include <string.h>
#define max_n 1000

char str1[max_n + 5], str2[max_n + 5];
int num1[max_n + 5] = {0}, num2[max_n + 5] = {0}, ans[max_n + 5] = {0};
int len1, len2;

int get_digits(int *num, int n) {
    while (!num[n]) {
        n--;
    }
    return n;
}

void do_div() {
    if (len1 > len2) {
        printf ("0");
        return ;
    } else if (len1 == len2) {
        while (len1-- && len2--){
            if (num1[len1] > num2[len2]) {
                printf ("0");
                return ;
            } else if (num1[len1] == num2[len2]) {
                continue;
            } else {
                break;
            }
        }
    }
    int len = len2 - len1;
    
}

int main() {
    scanf ("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for (int i = 0; i < len1; i++) {
        num1[len1 - i - 1] = str1[i] - '0';
    }
    for (int i = 0; i < len2; i++) {
        num2[len2 - i - 1] = str2[i] - '0';
    }
    do_div();
    return 0;
}

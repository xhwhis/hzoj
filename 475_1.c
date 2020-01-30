#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1000

char a[MAX_LEN + 20], b[MAX_LEN + 20];
int x[MAX_LEN + 20], y[MAX_LEN + 20], z[MAX_LEN + 20];

void debug_print(const int x[], int len)　{
    for (int i = 0; i < len; i++) {
        printf("%d", x[i]);
    }
    printf("\n");
}

void char_to_int(const char s[], int x[]) {
    int len = strlen(s);
    memset(x, 0, MAX_LEN + 20);
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        x[j] = s[i] - '0';
    }
}

int cal_length(const int x[]) {
    int count = 0;
    for (int i = MAX_LEN - 1; i >= 0; i--) {
        if (x[i]) {
            count++;
            break;
        }
    }
    return count;
}

int  big_int_sub( int x[], const int y[]) {
    int i = 0;
    const int lenx = cal_length(x);
    const int leny = cal_length(y);
    if (lenx < leny) {
        return -1;
    } else if (lenx == leny) {
        for (i = lenx - 1; i >= 0; i--) {
            if (x[i] < y[i]) {
                return -1;
            } else if (x[i] == y[i]) {
                continue;
            } else {
                break;
            }
        }
    }
    for (i = 0; i < MAX_LEN; i++) {
        x[i] = x[i] - y[i];
        if (x[i] < 0) {
            x[i] = x[i] + 10;
            x[i + 1] --;
        }
    }
    return 1;
}

void big_int_div(int x[], const int y[], int z[]) {
    int i , j = 0;
    int *copy_y = NULL;
    memset(z, 0, MAX_LEN + 20);
    const int lenx = cal_length(x);
    int leny = cal_length(y);
    int times = lenx - leny;
    copy_y = (int *)malloc(sizeof(int ) * MAX_LEN);
    memcpy(copy_y, y, sizeof(int) * MAX_LEN);
    for (i = lenx - 1; i >= 0; i--) {
        if (i >= times)
            copy_y[i] = copy_y[i - times];
        else
            copy_y[i] = 0;
    }
    leny = lenx;
    for (i = 0; i <= times; i++) {
        while ( big_int_sub(x, copy_y)  >= 0)
            z[times - i] ++;
        for (j = 1; j < leny; j++)
            copy_y[j - 1] = copy_y[j];
        copy_y[--leny] = 0;
    }
    for (i = 0; i < MAX_LEN ; i++)
    {
        if (z[i] >= 10)
        {
            z[i + 1] += z[i] / 10;
            z[i]  =  z[i] % 10;
        }
    }
}

void big_int_print(const int z[]) {
    int flag = 0;
    int i = 0;
    for (i = MAX_LEN; i >= 0; i--)
    {
        if (flag)
            printf("%d", z[i]);
        else if (z[i])
        {
            printf("%d", z[i]);
            flag = 1;
        }
    }
    if (!flag)
        printf("0");
    printf("\n");
}

int main( ) {
    scanf("%s%s", b, a);
    int len = 0;
    int lenx  = strlen(a);
    int leny  = strlen(b);
    len = lenx - leny;
    if (len < 0)
        printf("0\n");
    char_to_int(a, x);
    char_to_int(b, y);
    big_int_div(x, y, z);
    big_int_print(z);
    return 0;
}

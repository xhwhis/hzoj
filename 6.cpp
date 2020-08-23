#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstring>
#define max_n 20
#define max_p 1000000
#define max_m 1000
using namespace std;

int fib(string p, int a, char x) {
    string str0, str1, str2;
    int num1[max_m + 5], num2[max_m + 5];
    str0 = "0";
    str1 = p;
    for (int i = 2; i <= a; i++) {
        memset (num1, 0, sizeof num1);
        memset (num2, 0, sizeof num2);
        num1[0] = str0.length();
        for (int j = 1; j <= num1[0]; j++) {
            num1[j] = str0[num1[0] - j] - '0';
        }
        num2[0] = str1.length();
        for (int j = 1; j <= num2[0]; j++) {
            num2[j] = str1[num2[0] - j] - '0';
        }
        int len = (num1[0] > num2[0] ? num1[0] : num2[0]);
        for (int j = 1; j <= len; j++) {
            num1[j] += num2[j];
            num1[j + 1] += num1[j] / 10;
            num1[j] %= 10;
        }
        len++;
        while ((num1[len] == 0) && (len > 1)) {
            len--;
        }
        for (int j = len, k = 0; j >= 1; j--, k++) {
            sum[k] = a[j] + '0'; 
        }
        str1 = str2;
        str2 = sum;
    }
    return strcmp(num2, x) == 0;
}

int main() {
    string p, x;
    int a;
    cin >> p >> a >> x;
    for (int i = 1; i <= max_p; i++) {
        if (!fib(p, a, x)) continue;
        printf ("yes");
    }
    return 0;
}

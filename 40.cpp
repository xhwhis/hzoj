#include <iostream>
#include <cstring>
#define max_n 500
using namespace std;

char sum[max_n];
int num1[max_n], num2[max_n];

int main() {
    int n;
    cin >> n;
    string str1, str2, str3;
    str1 = "0";
    str2 = "1";
    str3 = "1";
    for (int i = 1; i < n; i++) {
		memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        num1[0] = str1.length();
        for(int j = 1; j <= num1[0]; j++) {
            num1[j] = str1[num1[0] - j] - '0';
        }
        num2[0] = str2.length();
        for(int j = 1; j <= num2[0]; j++) {
            num2[j] = str2[num2[0] - j] - '0';
        }
        int len = (num1[0] > num2[0] ? num1[0] : num2[0]);
        for (int j = 1; j <= len; j++) {
            num1[j] += num2[j];
            num1[j+1] += num1[j]/10;
            num1[j] %= 10;
        }
        len++;
        while ((num1[len] == 0) && (len>1)) {
            len--;
        }
        for (int j = len, k = 0; j >= 1; j--, k++) {
            sum[k] = num1[j] + '0';
        }
        str1 = str2;
        str2 = str3;
        str3 = sum;
    }
	cout << str1;
	return 0;
}

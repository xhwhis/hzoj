#include<stdio.h>

int is_prime(int n) {
	int i;
	for (i = 2; i * i <= n; i++)
        if (n % i == 0) break;
    return i * i > n;
}

int is_hui(int n) {
    return (n / 10000 == n % 10) && (n / 1000 % 10 == n / 10 % 10);
} 

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
	int flag = 0;
    for(int i=a; i<=b; i++) {
        if(is_hui(i) && is_prime(i)) {
            flag && printf(" ");
            printf("%d",i);
			flag = 1;
        }
    }
    return 0;
}

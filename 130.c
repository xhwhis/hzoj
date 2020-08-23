#include<stdio.h>
int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    double x = 0;
	for(int i=0;i<n;i++) {
		x=(x+m)*1.00417;
	}
    printf("$%.2lf\n", x);
    return 0;
}

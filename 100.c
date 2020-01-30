#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    double m = 0;
	for(int i=0;i<6;i++) {
		m = (m + n) * 1.00417;
	}
    printf("$%.2lf\n", m);
    return 0;
}

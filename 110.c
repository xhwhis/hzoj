#include<stdio.h>

int main() {
	double x;
	scanf("%lf", &x);
		printf("%.2lf", (x>15?15:x)*6+(x>15)*(x-15)*9);
	return 0;
}

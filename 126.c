#include<stdio.h>
#define pi 3.14
int main() {
	double r1,r2;
	scanf("%lf%lf",&r1,&r2);
	printf("%.2lf",pi*(r1*r1-r2*r2));
	return 0;
}

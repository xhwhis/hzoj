#include<stdio.h>
#define pi 3.14
int main(){
	double r,h;
	scanf("%lf%lf",&r,&h);
	printf("%.2lf\n%.2lf",r*r*pi,r*r*h*pi);
	return 0;
}

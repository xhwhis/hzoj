#include<stdio.h>
int main(){
	char s;
	double m, n;
	scanf("%c", &s);
	scanf("%lf%lf", &m, &n);
	if(s=='r')
		printf("%.2lf",m*n);
	if(s=='t')
		printf("%.2lf",m*n/2);
	return 0;
}

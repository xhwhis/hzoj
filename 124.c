#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if((b<=50 || a!=0) && (c<=25 || d>=5))
		printf("ok");
	else
		printf("pass");
	return 0;
}

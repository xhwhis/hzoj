#include<stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int num=a,b=0;
	while(a) {
		b=b*10+a%10;
		a/=10;
	}
	if(num==b)
		printf("YES");
	else
		printf("NO");
	return 0;
}

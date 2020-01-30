#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a/100==9||a%100/10==9||a%10==9))
		printf("YES");
	else
		printf("NO");
	return 0;
}

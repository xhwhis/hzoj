#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	if(x==y)
		printf("100");
	else if(y/10+y%10*10==x)
		printf("20");
	else if(y/10==x/10||y/10==x%10||y%10==x/10||y%10==x%10)
		printf("2");
	else
		printf("0");
	return 0;
}

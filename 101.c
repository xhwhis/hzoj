#include<stdio.h>
int main(){
	int n,num=0;
	scanf("%d",&n);
	while(n){
		num+=n%10;
		n/=10;
	}
	printf("%d",num);
	return 0;
}

#include<stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	if(N<=3)
		printf("14");
	else
		printf("%.1f", N*2.3+7.1);
	return 0;
}

#include<stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=((a-1)/11+1)*11, j=0; i<=b; i+=11,j++) {
		j&&printf(" ");
		printf("%d",i);
	}
	return 0;
}

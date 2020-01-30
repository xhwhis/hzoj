#include<stdio.h>
int main() {
	int n, flag=0;
	scanf("%d", &n);
	while(n) {
		if(n%2==0) {
			flag=1;
			break;
		}
		n/=10;
	}
	if(flag)
		printf("YES");
	else
		printf("NO");
	return 0;
}

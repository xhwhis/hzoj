#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	long long y=1;
	for(int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		y*=x;
	}
	printf("%lld",y);
	return 0;
}

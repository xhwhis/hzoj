#include<stdio.h>
int main() {
	int n,min;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		int a;
		scanf("%d",&a);
		if(i==0) min=a;
		if(min>a)
			min=a;
	}
	printf("%d",min);
	return 0;
}

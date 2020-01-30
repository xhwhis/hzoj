#include<stdio.h>
int main(){
	int t,h,m,s;
	scanf("%d",&t);
	if(t<43200)
		printf("%02d:%02d:%02d am",t/3600,t/60%60,t%60);
	else if(t>=43200&&t<=47800)
		printf("12:%02d:%02d midnoon",t/60%60,t%60);
	else
		printf("%02d:%02d:%2d pm",t/3600-12,t/60%60,t%60);
	return 0;
}

#include<stdio.h>
int main(){
	float a,b,c,t;
	scanf("%f%f%f%f",&a,&b,&c,&t);
	printf("%.2f",(1-t/a-t/b)/(1/a+1/b-1/c)+t);
	return 0;
}

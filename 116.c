#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	if(a>c){
		t=a;
		a=c;
		c=t;
	}
	if(b>c){
		t=b;
		b=c;
		c=t;
	}
	if(a+b<=c)
		printf("illegal triangle");
	else{
		if(a*a+b*b>c*c)
			printf("acute triangle");
		else if(a*a+b*b==c*c)
			printf("right triangle");
		else
			printf("obtuse triangle");
	}
	return 0;
}

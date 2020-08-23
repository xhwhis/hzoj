#include<stdio.h>
int main() {
	char a,b;
	scanf("%c %c",&a,&b);
	if((a=='O'&&b=='Y')||(a=='Y'&&b=='H')||(a=='H'&&b=='O'))
		printf("MING");
	else if(a==b)
		printf("TIE");
	else
		printf("LI");
	return 0;
}

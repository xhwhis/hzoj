#include<stdio.h>
int main(){
	char s;
	scanf("%c",&s);
	switch(s){
		case 'h':printf("He");break;
		case 'l':printf("Li");break;
		case 'c':printf("Cao");break;
		case 'd':printf("Duan");break;
		case 'w':printf("Wang");break;
		default :printf("Not Here");break;
	}
	return 0;
}

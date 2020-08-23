#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	switch((n+8)%12) {
		case 0: printf("rat");break;
		case 1: printf("ox");break;
		case 2: printf("tiger");break;
		case 3: printf("rabbit");break;
		case 4: printf("dragon");break;
		case 5: printf("snake");break;
		case 6: printf("horse");break;
		case 7: printf("sheep");break;
		case 8: printf("monkey");break;
		case 9: printf("rooster");break;
		case 10: printf("dog");break;
		case 11: printf("pig");break;
	}
	return 0;
}

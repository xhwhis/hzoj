#include <stdio.h>

int gcd(int a, int c) {
    return c == 0 ? a : gcd(c, a % c); 
}

int main() {
    int a, b, c, t;
    scanf ("%d%d%d", &a, &b, &c);
    if(a > b){
		t = a;
		a = b;
		b = t;
	}
	if(a > c){
		t = a;
		a = c;
		c = t;
	}
	if(b > c){
		t = b;
		b = c;
		c = t;
	}
    printf ("%d/%d", a / gcd(a, c), c / gcd(a, c));
    return 0;
}

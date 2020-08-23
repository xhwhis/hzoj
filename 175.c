#include <stdio.h>

int main() {
    int n, grade, num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    scanf ("%d", &n);
	for (int i = 0; i < n; i++) {
        scanf ("%d", &grade);
        if (grade >= 90) num1++;
        else if (grade >= 80) num2++;
        else if (grade >= 60) num3++;
        else num4++;
    }
    printf("You %d\nLiang %d\nZhong %d\nCha %d", num1, num2, num3, num4);
    return 0;
}

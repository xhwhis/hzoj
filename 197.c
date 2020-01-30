#include <stdio.h>

int main() {
    int num[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
	for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (num[j + 1]>num[j]) {
                int temp;
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
	for (int i = 0; i < 10; i++) {
        i && printf (" ");
        printf ("%d", num[i]);
    }
    return 0;
}

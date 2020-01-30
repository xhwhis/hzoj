#include <stdio.h>

int main() {
    int n, matrix[30][4];
    char name[30][15];
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%s", name[i]);
        for (int j = 0; j < 4; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
    int max_grade = 0, min_grade = matrix[0][0], max_sum = 0, NO1;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            if (max_grade < matrix[i][j]) max_grade = matrix[i][j];
            if (min_grade > matrix[i][j]) min_grade = matrix[i][j];
            sum += matrix[i][j];
        }
        if (max_sum < sum) {
            max_sum = sum;
            NO1 = i;
        }
        printf ("%d\n", sum);
    }
    printf ("%s\n%d %d", name[NO1], max_grade, min_grade);
    return 0;
}

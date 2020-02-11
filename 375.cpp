#include <cstdio>
#include <algorithm>
#define max_n 300
using namespace std;

struct node {
    int num;
    int grade1, grade2, grade3;
    int sum;
} student[max_n + 5];

bool cmp(node a, node b) {
    if (a.sum == b.sum) {
        if (a.grade1 == b.grade1) return a.num < b.num;
        return a.grade1 > b.grade1;
    }
    return a.sum > b.sum;
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        student[i].num = i + 1;
        student[i].sum = 0;
        scanf ("%d%d%d", &student[i].grade1, &student[i].grade2, &student[i].grade3);
        student[i].sum += student[i].grade1 + student[i].grade2 + student[i].grade3;
    }
    sort(student, student + n, cmp);
    for (int i = 0; i < 5; i++) {
        printf ("%d %d\n", student[i].num, student[i].sum);
    }
    return 0;
}

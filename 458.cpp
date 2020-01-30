#include <cstdio>
#include <algorithm>
#define max_n 100
using namespace std;

struct node {
    char name[10], sex[10];
    int year, month;
} students[max_n + 5];

bool cmp(node a, node b) {
    if (a.year == b.year) return a.month > b.month;
    return a.year > b.year;
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%s %s %d%d", students[i].name, students[i].sex, &students[i].year, &students[i].month);
    }
    sort(students, students + n, cmp);
    for (int i = 0; i < n; i++) {
        printf ("%s %s %d %d\n", students[i].name, students[i].sex, students[i].year, students[i].month);
    }
    return 0;
}

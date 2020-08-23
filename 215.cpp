#include <cstdio>
#include <algorithm>
#define max_n 40
using namespace std;

struct node {
    char name[10];
    int a, b, c, d;
} s[max_n + 5];

bool cmp(node s1, node s2) {
    return (s1.a + s1.b + s1.c + s1.d) > (s2.a + s2.b + s2.c + s2.d);
}

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%d%d%d%d", s[i].name, &s[i].a, &s[i].b, &s[i].c, &s[i].d);
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < 3; i++) {
        printf ("%s\n", s[i].name);
    }
    return 0;
}

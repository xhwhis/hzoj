#include <cstdio>
#include <algorithm>
using namespace std;

struct node {
    int num, time;
};

bool cmp(node a, node b) {
    return a.time < b.time;
}

node s[35];

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &s[i].time);
        s[i].num = i + 1;
    }
    sort(s, s + n, cmp);
    int ans = 0, now = 0;
    for (int i = 0; i < n; i++) {
        i && printf (" ");
        printf ("%d", s[i].num);
        ans += now;
        now += s[i].time;
    }
    printf ("\n%.2f\n", (double)ans / n);
    return 0;
}

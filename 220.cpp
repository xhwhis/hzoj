#include <iostream>
#include <string>
#include <algorithm>
#define max_n 100
using namespace std;

struct node {
    string name;
    int a, b, c, d;
} s[max_n + 5];

bool cmp1(node m, node n) {
    if (m.a == n.a) return m.name < n.name;
    return m.a > n.a;
}

bool cmp2(node m, node n) {
    if (m.b == n.b) return m.name < n.name;
    return m.b > n.b;
}

bool cmp3(node m, node n) {
    if (m.c == n.c) return m.name < n.name;
    return m.c > n.c;
}

bool cmp4(node m, node n) {
    if (m.d == n.d) return m.name < n.name;
    return m.d > n.d;
}

bool cmp5(node m, node n) {
    if ((m.a + m.b + m.c + m.d) == (n.a + n.b + n.c + n.d)) return m.name < n.name;
    return (m.a + m.b + m.c + m.d) > (n.a + n.b + n.c + n.d);
}

void out() {
    for (int i = 0; i < 4; i++) {
        i && cout << " ";
        cout << s[i].name;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c >> s[i].d;
    }
    sort(s, s + n, cmp1);
    out();
    sort(s, s + n, cmp2);
    out();
    sort(s, s + n, cmp3);
    out();
    sort(s, s + n, cmp4);
    out();
    sort(s, s + n, cmp5);
    out();
    return 0;
}

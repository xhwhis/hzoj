#include <iostream>
#include <algorithm>
#define max_n 100000
using namespace std;

struct node {
    int height, num;
} a[max_n + 5];

bool cmp(node a, node b) {
    if (a.height == b.height) return a.num < b.num;
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].height;
        a[i].num = i + 1;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        i && cout << " ";
        cout << a[i].num;
    }
    return 0;
}

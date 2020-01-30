#include <iostream>
#include <algorithm>
#define max_n 10000
using namespace std;

int a[max_n + 5];

int cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, l1, r1, l2, r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort (a + l1 - 1, a + r1);
    sort (a + l2 - 1, a + r2, cmp);
    for (int i = 0; i < n; i++) {
        i && cout << " ";
        cout << a[i];
    }
    return 0;
}

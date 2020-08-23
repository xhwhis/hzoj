#include <iostream>
#include <algorithm>
#define max_n 100000
using namespace std;

int a[max_n + 5], ind[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    nth_element(a, a + (n >> 1), a + n);
    int p = a[n >> 1], ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(p - a[i]);
    }
    cout << ans << endl;
    return 0;
}

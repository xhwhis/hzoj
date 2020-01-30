#include <iostream>
#include <algorithm>
#define max_n 1000000
using namespace std;

int a[max_n + 5];

int main() {
    int n, ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i;
    for (i = 0; i < n; i += 2) {
        if(a[i] - a[i + 1] || i == n - 1) {
            ans = a[i];
            break;
        }
    }
    cout << ans;
    return 0;
}

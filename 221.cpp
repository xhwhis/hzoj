#include <iostream>
#include <algorithm>
#define max_n 100000
using namespace std;

struct node {
    int height, num;
} a[max_n + 5];

int b[max_n + 5];
int ans[max_n + 5] = {0};

bool cmp(node a, node b) {
    return a.height < b.height;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i].height;
        a[i].num = i;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b, b + m);
    int k = 0;
    for (int i = 0; i < n; i++) {
        while (a[i].height >= b[k] && k < m) {
            ans[a[i].num]++;
            k++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}

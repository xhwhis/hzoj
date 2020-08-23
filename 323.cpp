#include <iostream>
#include <algorithm>
#define MAX_N 10000
using namespace std;

struct Data {
    int p, d;
} arr[MAX_N + 5];

struct UnionSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        return (fa[x] = (x == fa[x] ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

UnionSet u;

void solve(int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i].p >> arr[i].d;
    }
    sort(arr, arr + n, [](const Data &a, const Data &b) {return a.p > b.p;});
    u.init(MAX_N);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (u.get(arr[i].d) == 0) continue;
        ans += arr[i].p;
        int day = u.get(arr[i].d);
        u.merge(day, day - 1);
    }
    cout << ans << endl;
    return ;
}

int main() {
    int n;
    while (cin >> n) {
        solve(n);
    }
    return 0;
}

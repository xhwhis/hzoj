#include <cstdio>
#include <set>
#define max_n 400000

long long a[max_n + 5], b[max_n + 5];

struct Data {
    Data(long long val, long long x, long long y) : val(val), x(x), y(y) {}
    long long val, x, y;
    bool operator<(const Data &a) const {
        if (val - a.val) return val < a.val;
        if (x - a.x) return x < a.x;
        return y < a.y;
    }
};

set<Data> s;

int main() {
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf ("%lld", &b[i]);
    }
    s.insert(Data(a[0] + b[0], 0, 0));
    for (int i = 0; i < n; i++) {
        long long val = s.begin()->val;
        long long x = s.begin()->i;
        long long y = s.begin()->j;
        s.erase(s.begin());

    }
    return 0;
}

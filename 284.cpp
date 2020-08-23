#include <cstdio>
#include <iostream>
#include <set>
#define max_n 10000
using namespace std;

struct Data {
    Data(int d, int p, int id) : a(a), id(id), 
    int d, p, id;
    bool operator<(const Data &a) const {
        if (d - a.d) return d < a.d;
        if (p - a.p) return p < a.p;
        return id < a.id;
    }
} arr[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].d >> a[i].p;
        arr[i].id = i;
    }
    sort (arr, arr + n);
    for (int i = 0; i < t; i++) {

    }
    return 0;
}

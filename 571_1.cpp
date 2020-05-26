#include <iostream>
#include <set>
#define max_n 100
using namespace std;

int a[max_n + 5][max_n + 5];

struct Data {
    int x, y;
    Data(int a, int b) {
        x = a, y = b;
    }
};

set<Data> s;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] && i < j) {
                s.insert(Data(i, j));
            }
        }
    }

    return 0;
}

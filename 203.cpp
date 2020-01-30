#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int height[105], max[15] = {0}, sum = 0;
    for (int i = 0; i < m * n; i++) {
        cin >> height[i];
        if (max[i % n] < height[i]) max[i % n] = height[i];
        sum += height[i];
    }
    for (int i = 0; i < n; i++) {
        cout << max[i] << endl;
    }
    sort(height, height + m * n);
    for (int i = m * n - 1; i >= 0; i--) {
        cout << height[i];
        i && cout << " ";
    }
    cout << endl;
    int avg = round(sum * 1.0 / (m * n));
    cout << avg << endl;
    cout << m * n - (lower_bound(height, height + m * n, avg) - height) << endl;
    return 0;
}

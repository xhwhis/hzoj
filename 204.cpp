#include <iostream>
#include <algorithm>
#define max_n 100
using namespace std;

double a[max_n + 5];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}

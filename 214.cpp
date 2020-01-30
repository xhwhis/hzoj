#include <cstdio>
#include <algorithm>
#define max_n 30
using namespace std;

int a[max_n + 5];

int main() {
    int n, k;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    sort(a, a + n);
    scanf ("%d", &k);
    double sum = 0;
    for (int i = n- 1; i >= n - k; i--) {
        sum += a[i];
    }
    printf ("%.2lf", sum / k);
    return 0;
}

#include <iostream>
#include <map>
#include <vector>
#define max_n 1000
using namespace std;

int val[max_n + 5][max_n + 5];

int main() {
	int n;
	cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    cout << val[0][0];
    return 0;
}

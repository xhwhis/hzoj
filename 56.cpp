#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string per[7] = {"123", "1234", "12345", "123456", "1234567", "12345678", "123456789"};

int main() {
    int x, y;
    cin >> x >> y;
    int cnt = 1;
    do {
        if (cnt == y) {
            cout << per[x - 3];
            break;
        }
        cnt++;
    } while(next_permutation(per[x - 3].begin(), per[x - 3].end()));
    return 0;
}

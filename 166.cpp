#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    if (a.size() > 100) {
        cout << 100 << endl;
    } else{
        cout << a.size() << endl;
    }
    a = a.insert(n - 1, b);
    cout << a << endl;
    for (int i = a.size() - 1, j = 1; i >= 0; i--, j++) {
        if (a[i] == 'x') {
            cout << j << endl;
            break;
        }
    }
    return 0;
}

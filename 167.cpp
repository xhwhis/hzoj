#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int n;
    cin >> a >> n >> b;
    cout << a.size() << endl;
    cout << a.find('a') + 1 << endl;
    a = a.insert(n - 1, b);
    cout << a << endl;
    return 0;
}

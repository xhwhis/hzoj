#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int n;
    cin >> str1 >> n >> str2;
    cout << min(str1.length(), (size_t)100) << endl;
    str1.insert(n - 1, str2);
    cout << str1 << endl;
    cout << str1.length() - str1.rfind('x') << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[100];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        while (~str[i].find("Ban_smoking")) {
            str[i].replace(str[i].find("Ban_smoking"), 11, "No_smoking");
        }
    }
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}

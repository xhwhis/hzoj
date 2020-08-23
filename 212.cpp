#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string names[10];
    for (int i = 0; i < 10; i++) {
        cin >> names[i];
    }
    sort(names, names + 10);
    for (int i = 0; i < 10; i++) {
        cout << names[i] << endl;
    }
    return 0;
}

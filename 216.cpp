#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
	string name[105];
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        name[i] = name[i].substr(3);
    }
    sort(name, name + n);
    for (int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}

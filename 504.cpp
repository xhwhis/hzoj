#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
        int ind = str.size() - 1;
        for (int j = 0; j < ind; j++) {
            if (str[j] > str[j + 1]) {
                ind = j;
                break;
            }
        }
        str.replace(ind, 1, "");
    }
    int i = 0;
    while (str[i] == '0') i++;
    cout << str.substr(i) << endl;
    return 0;
}

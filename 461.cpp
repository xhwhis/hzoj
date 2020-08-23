#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        char ch;
        cin >> ch;
        if (ch == 'C') {
            char str[5];
            cin >> str;
            num++;
        } else {
            int grade;
            cin >> grade;
            sum += grade;
        }
    }
    cout << num << " " << sum / (n - num);
    return 0;
}

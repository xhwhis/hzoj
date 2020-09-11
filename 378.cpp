#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
    string str;
    cin >> str;
    stack<char> flag;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            flag.push(str[i]);
        } else {
            if (!flag.empty() && ((flag.top() == '(' && str[i] == ')') || (flag.top() == '[' && str[i] == ']') || (flag.top() == '{' && str[i] == '}'))) {
                flag.pop();
            }
        }
    }
    cout << (flag.empty() ? "YES" : "NO") << endl;
    return 0;
}

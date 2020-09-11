#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

void clear(stack<char>& flag) {
    while (!flag.empty()) {
        flag.pop();
    }
}

int main() {
    string str;
    cin >> str;
    stack<char> flag;
    int ans = 0, t = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            flag.push(str[i]);
        } else {
            if (flag.empty() || !((flag.top() == '(' && str[i] == ')') || (flag.top() == '[' && str[i] == ']') || (flag.top() == '{' && str[i] == '}'))) {
                ans = max(ans, t);
                t = 0;
                clear(flag);
            } else if ((flag.top() == '(' && str[i] == ')') || (flag.top() == '[' && str[i] == ']') || (flag.top() == '{' && str[i] == '}')) {
                t += 2;
                flag.pop();
            }
        }
    }
    ans = max(ans, t);
    cout << ans << endl;
    return 0;
}

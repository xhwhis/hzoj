#include <stdio.h>
#include <string.h>

char str[10005], flag[10005];

int main() {
    scanf ("%s", str);
    int top = -1;
    int ans = 0, t = 0;
    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            flag[++top] = str[i];
        } else {
            if (top == -1 || !((flag[top] == '(' && str[i] == ')') || (flag[top] == '[' && str[i] == ']') || (flag[top] == '{' && str[i] == '}'))) {
                ans = ans > t ? ans : t;
                t = 0;
                memset(flag, 0, sizeof(flag));
            } else if ((flag[top] == '(' && str[i] == ')') || (flag[top] == '[' && str[i] == ']') || (flag[top] == '{' && str[i] == '}')) {
                t += 2;
                --top;
            }
        }
    }
    ans = ans > t ? ans : t;
    printf ("%d\n", ans);
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#define max_n 100
using namespace std;

struct node{
    string votes;
    int num;
} val[max_n + 5];

bool cmp(node a, node b) {
    if (a.votes.length() == b.votes.length()) return a.votes > b.votes;
    return a.votes.length() > b.votes.length();
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> val[i].votes;
        val[i].num = i + 1;
    }
    sort(val, val + n, cmp);
    cout << val[0].num << '\n' << val[0].votes << endl;
    return 0;
}

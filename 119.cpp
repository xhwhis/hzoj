#include <iostream>
using namespace std;

int day_month(int y, int m) {
    switch(m) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : return 31;
        case 4 :
        case 6 :
        case 9 :
        case 11 : return 30;
    }
    if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0) {
        return 29;
    } else {
        return 28;
    }
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (m == 1 && d == 1) {
        cout << y - 1 << " 12 31" << endl;
        cout << y << " 1 2" << endl;
    } else if (m == 12 && d == 31) {
        cout << y << " 12 30" << endl;
        cout << y + 1 << " 1 1" << endl;
    } else if (d == day_month(y, m)) {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m + 1 << " " << 1 << endl;
    } else if (d == 1) {
        cout << y << " " << m - 1 << " " << day_month(y, m - 1) << endl;
        cout << y << " " << m << " " << 2 << endl;
    } else {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m << " " << d + 1 << endl;
    }
    return 0;
}

#include <stdio.h>

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int Days(int y, int m) {
    return days[m] + (m == 2 && ((y % 4 == 0 && y % 100) || y % 400 == 0));
}

void prev_day(int &y, int &m, int &d) {
    d--;
    if(d == 0) {
        m--;
        if(m == 0) {
            y--;
            m = 12;
        }
        d = Days(y, m);
    }
    return ;
}

void next_day(int &y, int &m, int &d) {
    d++;
    if (d > Days(y, m)) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }
    return ;
}

int main() {
    int y, m, d;
    scanf ("%d%d%d", &y, &m, &d);
    prev_day(y, m, d);
    printf ("%d %d %d\n", y, m, d);
    next_day(y, m, d);
    next_day(y, m, d);
    printf ("%d %d %d", y, m, d);
    return 0;
}

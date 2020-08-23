#include <stdio.h>

int get_week(int year, int month, int day) {
    int c = year / 100;
    int y = year - c * 100;
    int week = y + y / 4 + c / 4 - 2 * c + 26 * (month + 1) / 10 + day - 1;
    while (week < 0) {
        week += 7;
    }
    return week % 7;
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    scanf ("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);
    int year_l, year_r;
    if (month1 < 6 || (month1 == 6 && day1 <= 6)) {
        year_l = year1;
    } else {
        year_l = year1 + 1;
    }
    if (month2 > 6 || (month2 == 6 && day2 >= 6)) {
        year_r = year2;
    } else {
        year_r = year2 - 1;
    }
    int cnt = 0;
    for (int i = year_l ; i <= year_r; i++) {
        if (get_week(i, 6, 6) == 6) cnt++;
    }
    printf ("%d", cnt);
    return 0;
}

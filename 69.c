#include<stdio.h>

int main() {
    int year,month,day;
    scanf("%d%d%d", &year, &month, &day);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
        if(day<=31) {
            printf("Yes");
        } else {
            printf("No");
        }
    } else if(month==4 || month==6 || month==9 || month==11) {
        if(day<=30) {
            printf("Yes");
        } else {
            printf("No");
        }
    } else if(month==2) {
        if((year%4==0 && year%100!=0) || year%400==0) {
            if(day<=29) {
                printf("Yes");
            } else {
                printf("No");
            }
        } else {
            if(day<=28) {
                printf("Yes");
            } else {
                printf("No");
            }
        }
    } else {
        printf("No");
    }
    return 0;
}

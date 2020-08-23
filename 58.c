#include <stdio.h>

#define MAX(a, b) ({\
    __typeof(a) _a = (a);\
    __typeof(b) _b = (b);\
    _a > _b ? _a : _b;\
})

#define Plog(frm, args...) {\
    printf("[ %s : %d ] ", __func__, __LINE__);\
    printf(frm, ##args);\
    printf("\n");\
}

void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}

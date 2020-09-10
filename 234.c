#include <stdio.h>

typedef struct data {
    int cards[4], flag;
} data;

data piles[13];

int main() {
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            char card;
            scanf ("%c", &card);
            getchar();
            piles[i].flag = 0;
            switch (card) {
                case '0': piles[i].cards[j] = 10; break;
                case 'A': piles[i].cards[j] = 1; break;
                case 'J': piles[i].cards[j] = 11; break;
                case 'Q': piles[i].cards[j] = 12; break;
                case 'K': piles[i].cards[j] = 13; break;
                default: piles[i].cards[j] = card - '0'; break;
            }
        }
    }
    int death = 4, ans = 0;
    while (death && ans < 12) {
        int now = piles[12].cards[4 - death];
        while (now != 13) {
            piles[now - 1].flag++;
            if (piles[now - 1].flag == 4) ans++;
            now = piles[now - 1].cards[4 - piles[now - 1].flag];
        }
        death--;
    }
    printf("%d\n", ans);
    return 0;
}

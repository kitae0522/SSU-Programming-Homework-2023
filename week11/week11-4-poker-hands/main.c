#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char suit;
    int rank;
} CARD;

CARD deck[7];
int straight, flush, four, three, pair;

int cmp(const void *_n, const void *_m)
{
    CARD n = *(CARD *) _n;
    CARD m = *(CARD *) _m;
    if (n.rank < m.rank) return -1;
    if (n.rank > m.rank) return 1;
    return 0;
}

int main()
{
    for (int i = 0; i < 7; ++i) scanf("%c%d,", &deck[i].suit, &deck[i].rank);
    qsort(deck, 7, sizeof(CARD), cmp);
    //for (int i = 0; i < 7; ++i) printf("suit: %c, rank: %d\n", deck[i].suit, deck[i].rank);

    for (int i = 0; i < 3; ++i)
    {
        int straight_flag = 1, flush_flag = 1;
        for (int j = 0; j < 4; ++j)
        {
            if (deck[i + j].rank + 1 != deck[i + j + 1].rank)
            {
                straight_flag = 0;
                break;
            }
        }
        for (int j = 0; j < 4; ++j)
        {
            if (deck[i + j].suit != deck[i + j + 1].suit)
            {
                flush_flag = 0;
                break;
            }
        }
        straight = straight_flag;
        flush = flush_flag;
    }
    for (int i = 0; i < 4; ++i) if (deck[i].rank == deck[i + 1].rank && deck[i + 1].rank == deck[i + 2].rank && deck[i + 2].rank == deck[i + 3].rank) four = 1;
    for (int i = 0; i < 5; ++i) if (deck[i].rank == deck[i + 1].rank && deck[i + 1].rank == deck[i + 2].rank) three = 1;
    for (int i = 0; i < 6; ++i) if (deck[i].rank == deck[i + 1].rank) pair++;

    if (straight && flush) printf("straight flush");
    else if (four) printf("four of a kind");
    else if (three && pair) printf("full house");
    else if (flush) printf("flush");
    else if (straight) printf("straight");
    else if (three) printf("three of a kind");
    else if (pair >= 2) printf("two pair");
    else if (pair == 1) printf("one pair");
    else printf("high card");
    return 0;
}

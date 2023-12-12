#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char suit;
    int rank;
} CARD;

CARD deck[7];

int suit_count[4];
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
    for (int i = 0; i < 7; ++i)
    {
        scanf("%c%d,", &deck[i].suit, &deck[i].rank);
        if (deck[i].suit == 'h') suit_count[0]++;
        else if (deck[i].suit == 'c') suit_count[1]++;
        else if (deck[i].suit == 'd') suit_count[2]++;
        else if (deck[i].suit == 's') suit_count[3]++;
    }   
    for (int i = 0; i < 4; ++i) if (suit_count[i] >= 5) {flush = 1; break;}

    qsort(deck, 7, sizeof(CARD), cmp);
    for (int i = 0; i < 3; ++i) if (deck[i].rank + 1 == deck[i + 1].rank &&
                                    deck[i + 1].rank + 1 == deck[i + 2].rank &&
                                    deck[i + 2].rank + 1 == deck[i + 3].rank &&
                                    deck[i + 3].rank + 1 == deck[i + 4].rank) straight = 1;
    for (int i = 0; i < 4; ++i) if (deck[i].rank == deck[i + 1].rank &&
                                    deck[i + 1].rank == deck[i + 2].rank &&
                                    deck[i + 2].rank == deck[i + 3].rank) four = 1;
    for (int i = 0; i < 5; ++i) if (deck[i].rank == deck[i + 1].rank &&
                                    deck[i + 1].rank == deck[i + 2].rank) three = 1;
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
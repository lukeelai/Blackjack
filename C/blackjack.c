#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define DRAW 2

void shuffle(int card);

int main(){
    int i, index;

    srand((unsigned)time(NULL));

    for(i = 0; i < DRAW; i++){
        index = rand() % CARDS;
        showcard(index);
    }return(0);
}

void shuffle(int card){
    char *suit[4] = { "Clubs", "Diamond", "Heart", "Spade" };

    switch(card%13){
        case 0:
            printf("%2s","Ace");
            break;
        case 10:
            printf("%2s","Jack");
            break;
        case 11:
            printf("%2s","Queen");
            break;
        case 12:
            printf("%2s","King");
            break;
        default:
            printf("%2d",card%13+1);
    }printf(" of %s\n",suit[card/13]);
}

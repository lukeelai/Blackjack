#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 104
#define DRAW 2

void shuffle(int card);

int main(){
    int i, index;

    srand((unsigned)time(NULL));

    for(i = 0; i < DRAW; i++){
        index = rand() % CARDS;
        shuffle(index);
    }return(0);
}

void shuffle(int card){
    char *suit[8] = { "Clubs", "Diamond", "Heart", "Spade", "Clubs", "Diamond", "Heart", "Spade" };

    switch(card%26){
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
        case 14:
            printf("%2s","Ace");
            break;
        case 15:
            printf("%2s","2");
            break;
        case 16:
            printf("%2s","3");
            break;
        case 17:
            printf("%2s","4");
            break;
        case 18:
            printf("%2s","6");
            break;
        case 19:
            printf("%2s","7");
            break;
        case 20:
            printf("%2s","8");
            break;
        case 21:
            printf("%2s","9");
            break;
        case 22:
            printf("%2s","10");
            break;
        case 23:
            printf("%2s","Jack");
            break;
        case 24:
            printf("%2s","Queen");
            break;
        case 25:
            printf("%2s","King");
            break;
        default:
            printf("%2d",card%26+1);
    }printf(" of %s\n",suit[card/26]);
}

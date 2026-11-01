#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int r, a, b;

    srand((unsigned)time(NULL));

    for (a=0; a<5; a++){
        for (b=0; b<4; b++){
            r = (rand() % 20) + 1;
            printf("%d\t", r);
        }
        putchar('\n');
    }

    return 0;
}
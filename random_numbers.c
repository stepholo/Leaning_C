#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Main program:
 * Generates and prints a 5-by-4 table of random numbers from 1 to 20.
 */
int main(){

    int r, a, b;

    /* Use the current time as the seed so runs vary. */
    srand((unsigned)time(NULL));

    /* Generate five rows of four random values. */
    for (a=0; a<5; a++){
        for (b=0; b<4; b++){
            /* Restrict the generated value to the range 1 through 20. */
            r = (rand() % 20) + 1;
            printf("%d\t", r);
        }
        putchar('\n');
    }

    return 0;
}
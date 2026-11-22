#include <stdio.h>

/*
 * Main program:
 * Runs a loop that prints a value after each condition check.
 */
int main(){

    int x;

    /* The loop also executes printf during the update expression. */
    for(x=0; x<5; x++, printf("%d\n", x))
        ;

    return 0;
}
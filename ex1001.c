#include <stdio.h>

int verify(int value);
void limit(int stop);

/*
 * Main program:
 * Checks whether the entered stopping value is in the range 0 through 100,
 * then runs the corresponding limit function.
 */
int main(){

    int s, r;

    /* Read the stopping value and validate it before continuing. */
    printf("Enter a stoping value (0 - 100): ");
    scanf("%d", &s);
    r = verify(s);
    if (r == 1){
        limit(s);
    }

    return 0;
}


void limit(int stop){

    int x;

    /* End the loop if the user-selected value is reached. */
    for(x=0; x<=100; x++){
        if (x == stop){
            puts("You have won!");
            return;
        }
    }
    puts("I won!");
}

int verify(int value){

    /* Accept values only when they are within the inclusive range 0 to 100. */
    if (0 <= value && value <=100){
        return 1;
    }
    else{
        puts("Value out of range");
        return 0;
    }
}
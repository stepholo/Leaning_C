#include <stdio.h>

#define SIZE 5

void showarray(int array[]);
void arrayinc(int array[]);

/*
 * Main program:
 * Starts with an integer array, increments every element, and displays it.
 */
int main(){

    int n[] = {1, 2, 3, 5, 7 };

    /* Increment each element and display the modified array. */
    puts("Here's your array:");
    arrayinc(n);
    showarray(n);
    return 0;
}

void showarray(int array[]){

    int x;

    /* Print every element in the array. */
    for (x=0; x<SIZE; x++){
        printf("%d\t", array[x]);
    }
    putchar('\n');
}

void arrayinc(int array[]){

    int x;

    /* Arrays are passed by reference, so this changes the caller's array. */
    for (x=0; x<SIZE; x++){
         array[x] += 1;
    }
}
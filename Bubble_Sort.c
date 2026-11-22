#include <stdio.h>

#define SIZE 6

/*
 * Main program:
 * Displays an unsorted integer array, sorts it with bubble sort,
 * and prints the values in ascending order.
 */
int main(void) {
    
    /* Initialize the unsorted array and sorting variables. */
    int bubble[] = { 10, 2, 3, 9, 12, 7 };
    int temp, inner, outer, x;

    /* Print the array before sorting. */
    puts("Unsorted array");
    for(x=0; x<SIZE; x++){
        printf("%d\t", bubble[x]);
    }
    putchar('\n');

    /* Select adjacent or later elements and swap values out of order. */
    for(outer=0; outer<SIZE-1; outer++){
        for(inner=outer+1; inner<SIZE; inner++){
            if (bubble[outer] > bubble[inner]){
                temp = bubble[outer];
                bubble[outer] = bubble[inner];
                bubble[inner] = temp;
            }
        }
    }

    /* Sorted array - Ascending order */
    for (x=0; x<SIZE; x++){
        printf("%d\t", bubble[x]);
    }
    putchar('\n');

    return 0;
}
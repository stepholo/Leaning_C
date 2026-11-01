#include <stdio.h>

#define SIZE 6

int main(void) {
    
    int bubble[] = { 10, 2, 3, 9, 12, 7 };
    int temp, inner, outer, x;

    /* The array before sorting */
    puts("Unsorted array");
    for(x=0; x<SIZE; x++){
        printf("%d\t", bubble[x]);
    }
    putchar('\n');

    /* Sorted array - Bubble sort */
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
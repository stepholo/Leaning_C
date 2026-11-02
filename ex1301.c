#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 40

int* random_number();
int sort_text();

/*
 * Function to sort an array in ascending order
 * and in descending order using bubble sort 
 * data structure
*/

int main(){

    int *numbers = random_number();
    int x, outer, inner, temp;

    /* Display the array */
    puts("The original array with random numbers of range 1 - 100");
    for (x=0; x<SIZE; x++){
        printf("%d\t", numbers[x]);
    }
    printf("\n\n");

    /* Sort the array using Bubble sort (Ascending order)*/
    for(outer=0; outer<SIZE-1; outer++){
        for(inner=outer+1; inner<SIZE; inner++){
            if (numbers[outer] > numbers[inner]){
                temp = numbers[outer];
                numbers[outer] = numbers[inner];
                numbers[inner] = temp;
            }
        }
    } 

    /* Display the sorted array */
    puts("Array sorted in Ascending order");
    for (x=0; x<SIZE; x++){
        printf("%d\t", numbers[x]);
    }
    printf("\n\n");

    /* Sort the array now in reverse order (Descending order) */
    for(outer=0; outer<SIZE-1; outer++){
        for(inner=outer+1; inner<SIZE; inner++){
            if (numbers[outer] < numbers[inner]){
                temp = numbers[outer];
                numbers[outer] = numbers[inner];
                numbers[inner] = temp;
            }
        }
    }

    /* Display the sorted array */
    puts("Array sorted in Descending order");
    for(x=0; x<SIZE; x++){
        printf("%d\t", numbers[x]);
    }
    putchar('\n');

    sort_text();

    return 0;
}

/*Function that selects random numbers
 *In the range of 1 - 100
 *do-while loop used to ensure that no number is repeated
 */

int* random_number(){

    srand((unsigned)(time(NULL)));

    static int arr[SIZE];
    int x, r, y, duplicate;

    /* Generate random value and populate the array */
    for (x=0; x<SIZE; x++){
        do {
            r = (rand() % 100) + 1;
            duplicate = 0;

            for (y=0; y<x; y++){
                if (r == arr[y]){
                    duplicate = 1;
                    break;
                }
            }
        } while (duplicate);

        arr[x] = r;
    }

    return arr;
}

/*
 *A function that sorts character array
 *The array is 21 characters
 */

int sort_text(){

    char sentence[] = "C Programming is fun!";

    int temp, x, index = 0;

    while (sentence[index] != '\0'){

        for (x=index+1; x<21; x++){
            if (sentence[index] > sentence[x]){
                temp = sentence[index];
                sentence[index] = sentence[x];
                sentence[x] = temp;
            }
        }
        index++;
    }

    for (x=0; x<21; x++){
        printf("%c", sentence[x]);
    }
    putchar('\n');

    return 0;

}
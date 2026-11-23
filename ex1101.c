 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limit(int stop);
int verify();
int random_number();

/*
 * Main program:
 * Starts the limit and random-number game logic.
 */
int main(){

    int s;

    limit(s);
    return 0;
}

void limit(int stop){

    int x, n, m;

    /* Ask for a value and determine which game branch should run. */
    n = verify();

    if (n == 1){
        for(x=0; x<=100; x++){
                printf("%d ", x);
                if (x == stop){
                    puts("You won!");
                    return;
                }
            }
        }

    else if (n == 0){

        m = random_number();
        printf("Random number - %d", m);

        if (x == m){
            puts("I won!");
        }
    }

}

int verify(){

    int s;

    /* Read the stopping value and report whether it exceeds 100. */
    printf("Enter a stopping value (0 - 100): ");
    scanf("%d", &s);
    if (s > 100){
        return 1;
    }
    else {
        return 0;
    }
}

int random_number(){

    /* Seed the random generator before choosing a value. */
    srand(time(NULL));

    int min = 101;
    int max = 1000;

    int random_num = min + rand() % (max - min + 1);

    return random_num;
}
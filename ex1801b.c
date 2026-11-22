#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Number of robots that the program creates. */
#define SIZE 5

/* Store the position of one robot on a 20-by-20 coordinate grid. */
struct bot{
    int xpos;
    int ypos;
};

/* Return a copy of a robot with random coordinates. */
struct bot initialize(struct bot b);

/*
 * Main program:
 * Creates an array of robots, initializes each robot with random coordinates,
 * and prints the robot number and its x,y position.
*/

int main(){

    /* The array holds all of the robot positions. */
    struct bot robots[SIZE];
    int x;

    /* Seed the random number generator with the current time. */
    srand((unsigned)time(NULL));

    for (x=0; x<SIZE; x++){
        /* Initialize one robot and store the returned value in the array. */
        robots[x] = initialize(robots[x]);

        /* Display the robot number and its x,y coordinates. */
        printf("Robots %d; Coordinates: %d,%d\n",
        x+1, robots[x].xpos, robots[x].ypos);
    }

    return 0;
}

struct bot initialize(struct bot b){
    int x, y;

    /* Generate two random values for the robot's coordinates. */
    x = rand();
    y = rand();

    /* Use the remainder to keep each coordinate in the range 0 through 19. */
    x%=20;
    y%=20;

    /* Update the robot with the new coordinates. */
    b.xpos = x;
    b.ypos = y;

    /* A struct is passed by value, so return the updated copy. */
    return b;
}

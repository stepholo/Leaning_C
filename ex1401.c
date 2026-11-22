#include <stdio.h>

/*
 * Main program:
 * Creates a three-dimensional tic-tac-toe board, initializes it with dots,
 * places an X in the center, and displays each level.
 */
int main(){

    /* Create storage for all values on three 3-by-3 levels. */
    char tictactoe[3][3][3];
    int x, y, z;

    /* Initialize every board position with a dot. */
    for (x=0; x<3; x++){

        for (y=0; y<3; y++){

            for (z=0; z<3; z++){
                tictactoe[x][y][z] = '.';
            }
        }
    }
    tictactoe[1][1][1] = 'X';

    /* Display each level of the game board. */
    puts("Ready to play 3D Tic-Tac-Toe?");
    for (z=0; z<3; z++){

        printf("Level %d\n", z+1);
        for (x=0; x<3; x++){
            for (y=0; y<3; y++){
                printf("%c\t", tictactoe[x][y][z]);
            }
            putchar('\n');
        }
    }
    return 0;
}

#include <stdio.h>

/*
 * Main program:
 * Collects four players and their scores, sorts the records by descending
 * score, and prints the ranked player information.
 */
int main(){

    struct scores
    {
        char name[32];
        int score;
    };
    /* Store four player records. */
    struct scores players[4];
    struct scores temp;
    int x, y;

    /* Read a name and score for each of the four players. */
    for (x=0; x<4; x++){
        printf("Enter player %d ", x+1);
        scanf("%31s", players[x].name);
        printf("Enter there score: ");
        scanf("%d", &players[x].score);
    }

    /* Arrange the players in Descending order */
    for (x=0; x<3; x++){
        for (y=x+1; y<4; y++){
            if (players[x].score < players[y].score){
                temp = players[x];
                players[x] = players[y];
                players[y] = temp;
            }
        }
    }

    puts("Players Info");
    /* Print the final ranking table. */
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++){
        printf("%d\t%s\t%d\n", x+1, players[x].name, players[x].score);
    }

    return 0;

}
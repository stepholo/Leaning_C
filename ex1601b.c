#include <stdio.h>

int main(){

    struct scores
    {
        char name[32];
        int score;
    };
    struct scores players[4];
    struct scores temp;
    int x, y;

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
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++){
        printf("%d\t%s\t%d\n", x+1, players[x].name, players[x].score);
    }

    return 0;

}
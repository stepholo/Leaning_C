#include <stdio.h>
#include <stdlib.h>

void sub(void);

int main(int argc, char *argv[]){

    int x;

    if (argc > 1){
        printf("Greetings, %s\n", argv[1]);
    }

    printf("You typed %d number of arguments\n", argc);
    for (x=0; x<argc; x++){
        printf("#%d - %s\n", x, argv[x]);
    }

    puts("This program quits before it's done");
    sub();
    puts("Or was that on purpose?");

    return 0;
}

void sub(void){

    printf("Type 'ls' to list all items working direction :");
    getchar();
    system("ls");
    puts("Which is the plan");
    exit(0);
}
#include <stdio.h>
#include <stdlib.h>

void sub(void);

/*
 * Main program:
 * Displays command-line arguments, then calls sub(), which quits the program.
 */
int main(int argc, char *argv[]){

    int x;

    /* argc includes the program name, while argv stores each argument. */
    /* Print a greeting when at least one command-line argument is provided. */
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

    /* Ask the user to press Enter before listing the working directory. */
    printf("Type 'ls' to list all items working direction :");
    getchar();
    /* Run the operating-system listing command. */
    system("ls");
    puts("Which is the plan");
    exit(0);
}
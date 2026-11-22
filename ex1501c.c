#include <stdio.h>
#include <string.h>

/*
 * Main program:
 * Checks the entered password, then asks for a first and second name
 * and joins them when authentication succeeds.
 */
int main(){

    /* Store the password and the user input. */
    char password[] = "taco";
    char input[15];
    char first[40];
    char second[20];

    /* Prompt for and read the password. */
    printf("Input your password: ");
    scanf("%s", input);

    if (strcasecmp(password, input) == 0){
        /* Read both names and join them after successful authentication. */
        printf("What is your first name? ");
        scanf("%s", first);
        printf("What is your second name? ");
        scanf("%s", second);

        strcat(first, " ");
        strcat(first, second);
        printf("%s You have logged in succesfuly.\n", first);
    }
    else{
        puts("Wrong password");
    }

    return 0;
}
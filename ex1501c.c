#include <stdio.h>
#include <string.h>

int main(){

    char password[] = "taco";
    char input[15];
    char first[40];
    char second[20];

    printf("Input your password: ");
    scanf("%s", input);

    if (strcasecmp(password, input) == 0){
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
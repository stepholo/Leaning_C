#include <stdio.h>

/*
 * Main program:
 * Reads one or more full names from standard input and greets the user.
 */
int main(){

    /* Buffers for a first name and a full name. */
    char firstname[7];
    char fullname[15];

    /*printf("What is your firstname: ");
    scanf("%s", firstname);
    printf("Nice to meet you %s\n", firstname);*/
    printf("What are your full names: ");
    /* Read at most 14 characters plus room for the string terminator. */
    fgets(fullname, 15, stdin);
    printf("Nice to meet you %s", fullname);

    return 0;
}

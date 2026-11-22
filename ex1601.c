#include <stdio.h>

/*
 * Main program:
 * Demonstrates player, president, and nested struct definitions.
 */
int main(){

    /* Define a local player record. */
    struct player
    {
        char name[32];
        int highscore;
        float hours_played;
    } xbox;

    struct president
    {
        char name[40];
        int year;
    } first = {
        "George Washington",
        1789
    };

    struct president
    {
        char name[40];
        int year;
    } second = {
        "John Adams",
        1797
    };

    /* Read and store the player's three values. */
    printf("Enter the player's name: ");
    scanf("%s", xbox.name);
    printf("Enter there high score: ");
    scanf("%d", &xbox.highscore);
    printf("How many hours has he played: ");
    scanf("%f", &xbox.hours_played);

    /* Print the player record. */
    printf("Player %s has a highscore of %d with play duration of %.2f hours\n", xbox.name, xbox.highscore, xbox.hours_played);

    /* Print the two presidents and their inauguration years. */
    printf("The first president was %s and the second was %s\n", first.name, second.name);
    printf("They were inaugurated in the year %d and %d respectively\n", first.year, second.year);

    return 0;
}
#include <stdio.h>

/*
 * Main program:
 * Collects names and birthdays for four people stored in an array of structs,
 * then prints each person's information.
 */
int main(){

    /* Store the first and last name of one person. */
    /* Define a reusable structure for a person's name. */
    typedef struct id
    {
        char first[20];
        char last[20];
    } personal;

    /* Store one calendar date using month, day, and year values. */
    /* Define a reusable structure for a calendar date. */
    typedef struct date
    {
        int month;
        int day;
        int year;
    } calendar;

    /* Store both name and birthday as nested struct values. */
    /* Combine name and birthday into one record for each person. */
    struct human
    {
        personal name;
        calendar birthday;
    } president[4]; /* Array of four human records. */

    int x;

    /* Read details for each person in the president array. */
    for (x=0; x<4; x++){
        printf("Enter the details of %d person\n", x+1);

        /* Read and store the person's first name. */
        printf("Enter the first name: ");
        scanf("%s", president[x].name.first);

        /* Read and store the person's last name. */
        printf("Enter the second name: ");
        scanf("%s", president[x].name.last);

        /* Read and store the month of the person's birthday. */
        printf("Enter the birthday in the format of month: ");
        scanf("%d", &president[x].birthday.month);

        /* Read and store the day of the person's birthday. */
        printf("Enter the birthday in the format of day: ");
        scanf("%d", &president[x].birthday.day);

        /* Read and store the year of the person's birthday. */
        printf("Enter the birthday in the format of year: ");
        scanf("%d", &president[x].birthday.year);
    }

    /* Print the name and birthday of each person. */
    for (x=0; x<4; x++){
        printf("%s %s - %d/%d/%d\n", president[x].name.first, president[x].name.last,
        president[x].birthday.day, president[x].birthday.month, president[x].birthday.year);
    }

    return 0;
}
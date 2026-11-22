#include <stdio.h>
#include <string.h>

/*
 * Main program:
 * Builds a human record from nested date and identity structures, initializes
 * George Washington's details, and prints them.
 */
int main(){

    /* Define the date and name fields used by a human record. */
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct id
    {
        char first[30];
        char second[30];
    };

    struct human
    {
        struct id name;
        struct date birthday;
    } president;

    /* Initialize the president's name and birth date. */
    strcpy(president.name.first, "George");
    strcpy(president.name.second, "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    /* Print the complete person and birth-date record. */
    printf("%s %s was born on %d/%d/%d\n", president.name.first, president.name.second, president.birthday.month, president.birthday.day, president.birthday.year);

    return 0;
}
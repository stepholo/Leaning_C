#include <stdio.h>
#include <string.h>

int main(){

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

    strcpy(president.name.first, "George");
    strcpy(president.name.second, "Washington");
    president.birthday.month = 2;
    president.birthday.day = 22;
    president.birthday.year = 1732;

    printf("%s %s was born on %d/%d/%d\n", president.name.first, president.name.second, president.birthday.month, president.birthday.day, president.birthday.year);

    return 0;
}
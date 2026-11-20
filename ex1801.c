#include <stdio.h>

int main(){

    typedef struct id
    {
        char first[20];
        char last[20];
    } personal;

    typedef struct date
    {
        int month;
        int day;
        int year;
    } calendar;

    struct human
    {
        personal name;
        calendar birthday;
    } president[4];

    int x;
    for (x=0; x<4; x++){
        printf("Enter the details of %d person\n", x+1);
        printf("Enter the first name: ");
        scanf("%s", president[x].name.first);
        printf("Enter the second name: ");
        scanf("%s", president[x].name.last);
        printf("Enter the birthday in the format of month: ");
        scanf("%d", &president[x].birthday.month);
        printf("Enter the birthday in the format of day: ");
        scanf("%d", &president[x].birthday.day);
        printf("Enter the birthday in the format of year: ");
        scanf("%d", &president[x].birthday.year);
    }

    for (x=0; x<4; x++){
        printf("%s %s - %d/%d/%d\n", president[x].name.first, president[x].name.last,
        president[x].birthday.day, president[x].birthday.month, president[x].birthday.year);
    }

    return 0;
}
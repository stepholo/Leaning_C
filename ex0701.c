#include <stdio.h>


int main(){

    char firstname[7];
    char fullname[15];

    /*printf("What is your firstname: ");
    scanf("%s", firstname);
    printf("Nice to meet you %s\n", firstname);*/
    printf("What are your full names: ");
    fgets(fullname, 15, stdin);
    printf("Nice to meet you %s", fullname);

    return 0;
}

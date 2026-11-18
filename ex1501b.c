#include <stdio.h>
#include <ctype.h>

void change_case(char phrase[]);

int main(){

    char ans1;
    char ans2[50];

    printf("Would you like to blow up the moon? ");
    if (scanf("%49s", ans2) != 1) {
        return 1;
    }
    ans1 = ans2[0];

    printf("%c - %s\n", ans1, ans2);

    ans1 = toupper(ans1);

    if (ans1 == 'Y'){
        puts("BOOM!");
    }
    else if (ans1 == 'N'){
        puts("The moon is not that safe");
    }
    else {
        puts("The moon is safe");
    }

    puts("The changed case of the answer provided");
    change_case(ans2);

    return 0;
}

void change_case(char phrase[]){

    int i, x;

    i = 0;
    while (phrase[i] != '\0'){
        if (isascii(phrase[i])){
            if (isalpha(phrase[i])){
                if (islower(phrase[i])){
                    phrase[i] = toupper(phrase[i]);
                }
                else if (isupper(phrase[i])){
                    phrase[i] = tolower(phrase[i]);
                }
            }
        }
        i++;
    }

    for (x=0; x<i; x++){
        printf("%c", phrase[x]);
    }
    putchar('\n');
}
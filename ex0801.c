#include <stdio.h>

int main(){

    /*int letter;

    printf("Enter the choice of your letter here (a - c): ");
    letter = getc(stdin);

    if (letter == 'A' || letter == 'B' || letter == 'C') {
        switch(letter){
            case 'A':
                puts("Driver's fault, not your fault");
                break;

            case 'B':
                puts("Illegal format, call a lawyer");
                break;

            case 'C':
                puts("Bad filename, spank it");
                break;
            default:
                puts("Thats not a, b, c");
        }
    }

    else if (letter == 'a' || letter == 'b' || letter == 'c') {
        switch(letter){
            case 'a':
                puts("Driver's fault, not your fault");
                break;

            case 'b':
                puts("Illegal format, call a lawyer");
                break;

            case 'c':
                puts("Bad filename, spank it");
                break;
            default:
                puts("Thats not a, b, c");
        }
    }

    else {
        puts("Thats the default required letter");
    }*/

    int a, b, larger;

    printf("Enter value A: ");
    scanf("%d", &a);
    printf("Enter another value B: ");
    scanf("%d", &b);

    larger = a > b ? a : b;
    printf("%d is largest value\n", larger);
    
    return 0;
}
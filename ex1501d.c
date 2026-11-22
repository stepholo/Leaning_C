#include <stdio.h>
#include <ctype.h>

#define SIZE 4

int return_first_stream(void);

/*
 * Main program:
 * Demonstrates floating-point and string formatting, text statistics,
 * string alignment, stream input, and returning the first character.
 */
int main(){

    /* Variables for formatting demonstrations and character counts. */
    float sample1 = 34.5;
    float sample2 = 12.3456789;
    char hello[] = "hello";
    char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the seperate and equal station to which the Laws of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the cause which impel them to the seperation.";
    int alpha, punct, blank, index, x, y;
    char presidents[SIZE][20] = {
        "George Washington",
        "John Adams",
        "Thomas Jefferson",
        "James Monroe"
    };
    char i;
    int first, second;

    alpha = punct = blank = index = 0;

    /* Demonstrate floating-point formatting. */
    puts("Floating point conversion");
    printf("%%6.1f = %6.1f\n", sample1);
    printf("%%5.1f = %5.1f\n", sample2);
    printf("%%4.1f = %4.1f\n", sample1);

    printf("%%9.4f = %9.4f\n", sample2);
    printf("%%9.5f = %9.5f\n", sample2);
    printf("%%9.6f = %9.6f\n", sample2);

    puts("\nStrings conversion");
    printf("%%8s = %8s\n", hello);
    printf("%%7s = %7s\n", hello);
    printf("%%6s = %6s\n", hello);
    printf("%%5s = %5s\n", hello);

    puts("\nInteger conversion");
    /* Count alphabetic, blank, and punctuation characters. */
    while (phrase[index] != '\0'){
        if (isalpha(phrase[index])){
            alpha++;
        }
        else if (isblank(phrase[index])){
            blank++;
        }
        else if (ispunct(phrase[index])){
            punct++;
        }
        index++;
    }

    printf("%d Total characters\n", index);
    printf("%5d alphabetic characters\n", alpha);
    printf("%6d blanks\n", blank);
    printf("%6d punctuation symbols\n", punct);

    puts("\nString Alignment");
    printf("%-9s me\n", "meet");
    printf("%-8s me\n", "meet");
    printf("%-7s me\n", "meet");
    printf("%-6s me\n", "meet");
    printf("%-5s me\n", "meet");
    printf("%-4s me\n", "meet");

    puts("\nPresidents alignment");
    /* Print each president name while demonstrating field alignment. */
    for (x=0; x<SIZE; x++){
        y = 0;
        while (presidents[x][y] != '\0'){
                if (y > 5){
                    if (isblank(presidents[x][y])){
                        printf("%c", presidents[x][y]);
                    }
                }
                else if (y < 5){
                    if (isblank(presidents[x][y])){
                        printf("%-3c", presidents[x][y]);
                    }
                }
                else {
                    if (isblank(presidents[x][y])){
                        printf("%-2c", presidents[x][y]);
                    }
                }
                putchar(presidents[x][y]);
                y++;
            }
            putchar('\n');

        }

    puts("\nUsing stream inputs");
    /* Read characters until a period is entered. */
    do {
        i = getchar();
        putchar(i);
    } while (i != '.');
    putchar('\n');

    printf("Type your first initial: ");
    first = return_first_stream();
    if (first == EOF) {
        return 1;
    }
    printf("Type your second initial: ");
    second = return_first_stream();
    if (second == EOF) {
        return 1;
    }
    printf("Your initials are '%c' and '%c' \n", first, second);

    return 0;
}

int return_first_stream(void){
    int first, input;

    /* Skip newline characters before reading the first character. */
    do {
        first = getchar();
    } while (first == '\n');

    if (first == EOF) {
        return EOF;
    }

    /* Discard all remaining characters in the input line. */
    while ((input = getchar()) != '\n' && input != EOF) {
    }

    return first;
}
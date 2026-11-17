#include <stdio.h>
#include <ctype.h>

int main(){

    char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the seperate and equal station to which the Laws of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the cause which impel them to the seperation.";

     int index, alpha, blank, punct, upper, lower;

     alpha = blank = punct = upper = lower = 0;

     /* gather data */
     index = 0;
     while (phrase[index]){
        if (isalpha(phrase[index])){
            alpha++;
        }
        if (isblank(phrase[index])){
            blank++;
        }
        if (ispunct(phrase[index])){
            punct++;
        }
        if (islower(phrase[index])){
            lower++;
        }
        if (isupper(phrase[index])){
            upper++;
        }
        index++;
     }

     /* Print Results */
     printf("\"%s\"\n", phrase);
     puts("Statistics:");
     printf("%d alphabetic characters\n", alpha);
     printf("%d blanks\n", blank);
     printf("%d punctuation symbols\n", punct);
     printf("%d lower case characters\n", lower);
     printf("%d upper case characters\n", upper);
     printf("%d total characters\n", index);

     return 0;
}
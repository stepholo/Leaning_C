#include <stdio.h>

int verify(int value);
void limit(int stop);

int main(){

    int s, r;

    printf("Enter a stoping value (0 - 100): ");
    scanf("%d", &s);
    r = verify(s);
    if (r == 1){
        limit(s);
    }

    return 0;
}


void limit(int stop){

    int x;

    for(x=0; x<=100; x++){
        if (x == stop){
            puts("You have won!");
            return;
        }
    }
    puts("I won!");
}

int verify(int value){

    if (0 <= value && value <=100){
        return 1;
    }
    else{
        puts("Value out of range");
        return 0;
    }
}
#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("Test.txt", "r");

    char ch;
    ch = getc(fptr);

    while(ch != EOF){
        printf("%c", ch);
        ch = getc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;

}
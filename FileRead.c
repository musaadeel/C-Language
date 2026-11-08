#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("Test.txt", "r");

    char ch;

    fscanf(fptr, "%c", &c);
    printf("Character = %c", c);

    fclose(fptr);
    
    return 0;

}
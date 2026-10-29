#include <stdio.h>

int main(){

    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("\n");

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    printf("\n");

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);


    return 0;

}


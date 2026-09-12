#include <stdio.h>

//even --> 1
//odd --> 0

int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    printf("Even");
    else
    printf("Odd");

    return 0;
}
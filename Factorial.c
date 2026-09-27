#include <stdio.h>

int main(){

    int n, i, factorial;

    printf("Enter number for factorial: ");
    scanf("%d", &n);
    factorial = 1;

    for(i = n; i >= 1; i--){

        factorial = factorial * i;

    }

    printf("Factorial answer is: %d", factorial);

    return 0;


    
}
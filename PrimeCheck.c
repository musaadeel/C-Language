#include <stdio.h>

int main(){

    int n, i, is_prime ;

    is_prime = 1;

    printf("Enter number to check prime: ");
    scanf("%d", &n);

    if(n <= 1){
        is_prime = 0;
    }
    else{
        for(i = 2; i <= n/2; i++){
            if(n % i == 0){
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime == 1){
        printf("%d is a Prime Number", n);
    }
    else{
        printf("%d is not a Prime Number", n);
    }

    return 0;

}
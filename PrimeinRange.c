#include <stdio.h>

// printing prime numbers from 5 to 50

int main(){

    int i, j, is_prime;

    for (i = 5; i <= 50; i++){
        is_prime = 1;
        for(j = 2; j <= i/2; j++){
            if (i % j ==0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1){
            printf("%d\n", i);
        }
    }

    return 0;


}
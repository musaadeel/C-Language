#include <stdio.h>

int main(){

    int i, sum;

    sum = 0;

    for(i = 5; i <= 50; i++){
        sum = sum + i;
    }

    printf("Sum between 5 and 50 is: %d", sum);

    return 0;
    

}
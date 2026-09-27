#include <stdio.h>

int main(){

    int n, i;

    printf("Enter number n for it's reverse table: ");
    scanf("%d", &n);

    for(i = 10; i >= 1; i--){

        printf("%d\n", i * n);

    }

    return 0;
    
}
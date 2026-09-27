#include <stdio.h>

int main(){

    int n,i;

    for(i=0; ; i++){
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n % 2 != 0){
            printf("No more inputs, as you entered an Odd number");
            break;
        }
    }

    return 0;

}
#include <stdio.h>

int main(){
    int n, i;

    for(i=0; ; i++){
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n % 7 == 0){
            printf("%d\n", n);
            printf("No more inputs, as you entered number which is multiple of 7");
            break;
        }
        else{
            printf("%d\n", n);
        }
    }

    return 0;
    
}
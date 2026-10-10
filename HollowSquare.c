#include <stdio.h>

int main(){

    int i,j,border;

    printf("Enter a number for borders length: ");
    scanf("%d", &border);

    for(i=1; i <= border; i++){
        for(j=1; j <= border; j++){
            if(i == 1 || i == border || j == 1 || j == border){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;

}
#include <stdio.h>

int main(){

    int i, j, rows;

    printf("Enter number of rows for inverted right angled triangle pattern: ");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++){
        for(j = rows; j >= i ; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
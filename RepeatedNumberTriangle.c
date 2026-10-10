#include <stdio.h>

int main(){

    int i, j, rows, num;

    printf("Enter number of rows for repeated number triangle: ");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++){
        num = i;
        for(j=1; j <= i; j++){
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;

}
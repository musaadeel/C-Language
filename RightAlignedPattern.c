#include <stdio.h>

int main(){

    int i, j, k, rows;

    printf("Enter number of rows for Right Aligned Pattern: ");
    scanf("%d", &rows);

    for(i = 0; i < rows; i++){
        for(j = 0; j < rows - i; j++){
            printf(" ");
        }
        for(k = 0; k <= i; k++){
            printf("%d", k + 1);
        }
        printf("\n");
    }

    return 0;

}
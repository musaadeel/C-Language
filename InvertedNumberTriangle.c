#include <stdio.h>

int main(){

    int i, j, rows, num;

    printf("Enter number of rows for inverted number triangle: ");
    scanf("%d", &rows);

    for(i=1; i <= rows; i++){
        num = 1;
        for(j=rows; j >= i; j--){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;

}
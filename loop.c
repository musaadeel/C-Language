#include <stdio.h>

int main(){

    int i, n, sum, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum =0;

    for(i=1, j=n; i<=n && j>=1; i++,j--){
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("sum is: %d", sum);

    return 0;
}
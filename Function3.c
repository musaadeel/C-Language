#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Enter number to square: ");
    scanf("%d", &n);
    n = pow(n, 2);
    printf("Square is %d", n);

    return 0;

}
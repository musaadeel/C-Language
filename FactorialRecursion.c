#include <stdio.h>

int Factorial(int n);

int main(){

    int n, result;

    printf("Enter n for Factorial: ");
    scanf("%d", &n);

    result = Factorial(n);
    printf("Factorial is : %d", result);

    return 0;

}

int Factorial(int n){

    if(n == 1){
        return 1;
    }
    int Fnm1 = Factorial(n - 1);
    int Fn = Fnm1 * n;
    return Fn;

}
#include <stdio.h>

int RecursiveSum(int n);

int main(){
    int n, result;

    printf("Enter n for Sum of first n natural numbers: ");
    scanf("%d", &n);

    result = RecursiveSum(n);
    printf("Sum of first n natural numbers is: %d", result);

    return 0 ;

}

int RecursiveSum(int n){

    if(n == 1){
        return 1;
    }
    int SumNm1 = RecursiveSum(n - 1);
    int Sumn = SumNm1 + n;
    return Sumn;

}
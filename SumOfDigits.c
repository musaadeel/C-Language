#include <stdio.h>

int SumofDigits(int n);

int main(){

    int n;

    printf("Enter number n for its Sum of digits: ");
    scanf("%d", &n);
    printf("Sum of digits of n is: %d", SumofDigits(n));

    return 0;

}

int SumofDigits(int n){

    if(n == 1){
        return 1;
    }

    int SumNm1 = SumofDigits(n - 1);
    int SumN = SumNm1 + n;
    return SumN;

}
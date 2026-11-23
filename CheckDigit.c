#include <stdio.h>

int SumDigit(int n);
int CheckDigit(int n);

int main(){

    int n;
    printf("Enter account number: ");
    scanf("%d", &n);
    int CheckSum = SumDigit(n);
    int result = CheckDigit(CheckSum);
    printf("Check Digit: %d", result);

    return 0;    

}

int SumDigit(int n){
    if(n == 0){
        return 0;
    }
    else{
        int NMT = n % 10;
        int NDT = SumDigit(n / 10);
        int SumN = NMT + NDT;
        return SumN;
    }
}

int CheckDigit(int n){
    if(n < 10){
        return n;
    }
    else{
        int NewN = SumDigit(n);
        return CheckDigit(NewN);
    }    
}
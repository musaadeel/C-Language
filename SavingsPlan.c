#include <stdio.h>

int main(){

    int deposit, count;
    float amount;
    count = 0;
    amount = 0.0;

    printf("Enter initial deposit: ");
    scanf("%d", &deposit);
    amount = deposit;

    while(amount <= deposit * 2){
        count++;
        amount = amount + (amount * 0.08);
        printf("Year %d: Rs. %.2f\n", count, amount);
    }

    printf("Deposit Doubled in %d years.", count);

    return 0;

}
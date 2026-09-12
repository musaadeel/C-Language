# include <stdio.h>

int main(){
    int acc_type, acc_balance;
    float interest;
    printf("Enter Account Type(1= Savings, 2 = Current, 3 = Fixed Deposit): ");
    scanf("%d", &acc_type);
    printf("Enter your Bank Balance: ");
    scanf("%d", &acc_balance);

    switch (acc_type)
    {
    case 1:
    if (acc_balance > 100000){
        interest = (acc_balance * 0.04);
    }
    else{
        interest = (acc_balance * 0.02);
    }
    break;

    case 2:
    interest = 0;
    break;

    case 3:
    interest = (acc_balance * 0.08);
    break;
    
    default:
    printf("Invalid Account Type Number");
        break;
    }

    printf("Annual Interest Earned : %f", interest);

   return 0;

}
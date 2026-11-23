#include <stdio.h>

typedef struct BankInformation{

    char Customer_Name[20];
    int Account_num;
    char Branch[20];
    char Account_type[20];

} bankinfo;

int main(){

    bankinfo a1 = {"Musa", 3023, "Unit 7", "Gold"};
    printf("Customer Name: %s\n", a1.Customer_Name);
    printf("Account Number: %d\n", a1.Account_num);
    printf("Branch: %s\n", a1.Branch);
    printf("Account Type: %s\n", a1.Account_type);

    return 0;

}




# include<stdio.h>

int main(){

    int policy_status, vehicle_age, claim_amount;
    float approved_claim_amount;

    printf("Enter Policy Status (1 = Active, 0 = Not Active ): ");
    scanf("%d", &policy_status);
    printf("Enter your Vehicle Age: ");
    scanf("%d", &vehicle_age);
    printf("Enter claim amount: ");
    scanf("%d", &claim_amount);

    switch (policy_status){
        case 1:
        if (vehicle_age < 10 && claim_amount <= 500000){
            approved_claim_amount = claim_amount;
            printf("Your approved claim amount is: %.2f", approved_claim_amount);
        }
        else if(vehicle_age >= 10 && vehicle_age <= 15){
            approved_claim_amount = (claim_amount * 0.5);
            printf("Your approved claim amount is: %.2f", approved_claim_amount);
        }
        else{
            approved_claim_amount = 0;
            printf("Your approved claim amount is: %.2f", approved_claim_amount);
        }
        break;

        case 0:
        printf("Your policy is not active\n");
        approved_claim_amount = 0;
        printf("Your approved claim amount is: %.2f", approved_claim_amount);
        break;

        default:
        printf("Invalid policy status");

    }

    return 0;

}
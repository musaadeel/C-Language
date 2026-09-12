# include<stdio.h>

int main(){

    int hours_of_visit, membership_status;
    float bill_amount, final_bill_amount;

    printf("Enter your hour of visit (24-hour format): ");
    scanf("%d", &hours_of_visit);

    if (hours_of_visit < 0 || hours_of_visit > 24){
        printf("Invalid hour of visit");
    }
    else{
        switch(hours_of_visit){

            case 15:
            case 16:
            case 17:
            printf("Enter the bill amount: ");
            scanf("%f", &bill_amount);
            printf("Enter your Membership Status (1 = Active, 0 = Not Active): ");
            scanf("%d", &membership_status);
            switch (membership_status){
                case 1:
                final_bill_amount = (bill_amount * 0.75);
                printf("Your final bill amount is: %.2f", final_bill_amount);
                break;

                case 0:
                final_bill_amount = (bill_amount * 0.8);
                printf("Your final bill amount is: %.2f", final_bill_amount);
                break;

                default:
                printf("Invalid Membership Status");
            }
            break;

            default:
            printf("Enter the bill amount: ");
            scanf("%f", &bill_amount);
            printf("Enter your Membership Status (1 = Active, 0 = Not Active): ");
            scanf("%d", &membership_status);
            switch (membership_status){
                case 1:
                final_bill_amount = (bill_amount * 0.9);
                printf("Your final bill amount is: %.2f", final_bill_amount);
                break;

                case 0:
                final_bill_amount = bill_amount;
                printf("Your final bill amount is: %.2f", final_bill_amount);
                break;

                default:
                printf("Invalid Membership Status");
            }
        }
    }

    return 0;

}
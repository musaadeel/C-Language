# include<stdio.h>

int main(){
    int plan, minutes_used, total_bill;
    printf("Plan 1: Rs 500 for 1000 minutes\n");
    printf("Plan 2: Rs 800 for 2000 minutes\n");
    printf("Plan 3: Rs 1200 for unlimited minutes\n");
    printf("Plan 4: Custom plan billed at Rs 1/minute\n");
    printf("Enter plan by number (1-4): ");
    scanf("%d", &plan);

    switch(plan){

        case 1:
        printf("Enter minutes used: ");
        scanf("%d", &minutes_used);
        if (minutes_used > 1000){
            total_bill = (500 + ((minutes_used - 1000) * 2));
            printf("Your total amount of bill is: %d", total_bill);
        }
        else{
            total_bill = 500;
            printf("Your total amount of bill is: %d", total_bill);
        }
        break;

        case 2:
        printf("Enter minutes used: ");
        scanf("%d", &minutes_used);
        if (minutes_used > 2000){
            total_bill = (800 + ((minutes_used - 2000) * 2));
            printf("Your total amount of bill is: %d", total_bill);
        }
        else{
            total_bill = 800;
            printf("Your total amount of bill is: %d", total_bill);
        }
        break;

        case 3:
        total_bill = 1200;
        printf("Your total amount of bill is: %d", total_bill);
        break;

        case 4:
        printf("Enter minutes used: ");
        scanf("%d", &minutes_used);
        total_bill = (minutes_used * 1);
        printf("Your total amount of bill is: %d", total_bill);
        break;

        default:
        printf("Invalid Plan Choice");
    }
    
    return 0;

}
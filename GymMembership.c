#include <stdio.h>

int main(){
    int membership_type, time_slot;
    float monthly_fee;
    printf("Enter your Membership type (1 = Student, 2 = Regular, 3 = Senior Citizen) : ");
    scanf("%d", &membership_type);
    printf("Enter your Time slot (1 = Morning, 2 = Evening) : ");
    scanf("%d", &time_slot);

    switch(membership_type){
        case 1:
        switch(time_slot){
            case 1:
            monthly_fee = (2000 * 0.85);
            break;
            case 2:
            monthly_fee = 2000;
            break;
        }
        break;

        case 2:
        switch(time_slot){
            case 1:
            monthly_fee = (3500 * 0.85);
            break;
            case 2:
            monthly_fee = 3500;
            break;
        }
        break;

        case 3:
        switch (time_slot){
            case 1:
            monthly_fee = (2500 * 0.85);
            break;
            case 2:
            monthly_fee = 2500;
            break;
        }
        break;

    }
    
    printf("Your Final Monthly Fee is : %.2f", monthly_fee);


    return 0;

}
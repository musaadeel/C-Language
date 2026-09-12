# include<stdio.h>

int main(){

    int zone_type, fine_amount;
    float driver_speed;

    printf("Enter zone type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
    scanf("%d", &zone_type);

    switch(zone_type){

        case 1:
        printf("Enter driver's speed: ");
        scanf("%f", &driver_speed);
        if (driver_speed > 30 && driver_speed < 50){
            fine_amount = 1000;
            printf("Your fine amount is: %d", fine_amount); 
        }
        else{
            fine_amount = 1000 * 2;
            printf("Your fine amount is: %d", fine_amount);
        }
        break;

        case 2:
        printf("Enter driver's speed: ");
        scanf("%f", &driver_speed);
        if (driver_speed > 100 && driver_speed < 120){
            fine_amount = 1000;
            printf("Your fine amount is: %d", fine_amount); 
        }
        else{
            fine_amount = 1000 * 2;
            printf("Your fine amount is: %d", fine_amount);
        }
        break;

        case 3:
        printf("Enter driver's speed: ");
        scanf("%f", &driver_speed);
        if (driver_speed > 50 && driver_speed < 70){
            fine_amount = 1000;
            printf("Your fine amount is: %d", fine_amount); 
        }
        else{
            fine_amount = 1000 * 2;
            printf("Your fine amount is: %d", fine_amount);
        }
        break;

        default:
        printf("Invalid zone type");
    }

    return 0;

}
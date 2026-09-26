#include <stdio.h>

int main(){

    int rain_status;
    float temperature;

    printf("Enter rain status(0 = Not Raining, 1 = Raining): ");
    scanf("%d", &rain_status);
    printf("Enter Tenperature: ");
    scanf("%f", &temperature);

    switch (rain_status){

        case 0:
        if(temperature < 15.0){
            printf("Wear a Jacket");
        }
        else if(temperature >= 15 && temperature <= 25){
            printf("Wear Light Clothing");
        }
        else{
            printf("Wear Summer Clothing");
        }
        break;

        case 1:
        if(temperature < 15.0){
            printf("Carry an Umbrella\n");
            printf("Wear a Jacket");
        }
        else if(temperature >= 15 && temperature <= 25){
            printf("Carry an Umbrella\n");
            printf("Wear Light Clothing");
        }
        else{
            printf("Carry an Umbrella\n");
            printf("Wear Summer Clothing");
        }
        break;

        default:
        printf("Invalid Rain Status");

    }

    return 0;


}
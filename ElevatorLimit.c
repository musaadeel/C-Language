#include <stdio.h>

int main(){

    
    int number_of_people;
    float combined_weight;
    printf("Enter total number of people: ");
    scanf("%d", &number_of_people);
    printf("Enter total combined weight: ");
    scanf("%f", &combined_weight);
    if (number_of_people <= 10 && combined_weight <= 1000.0){
        printf("Elevator can operate normally");
    }
    else if (number_of_people > 10){
        printf("Needs to deny entry due to exceeding the people limit");
    }
    else{
        printf("Needs to deny entry due to overweight,");
    }

    return 0;

}
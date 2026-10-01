#include <stdio.h>

int main(){

    int i, minimum;
    float Petrol_Prices[10] = {0};
    float avg, sum, min;

    for(i=0; i<10; i++){
        printf("Enter petrol price for day %d: ", i+1);
        scanf("%f", &Petrol_Prices[i]);
    }

    avg = 0.0;
    sum = 0;
    min = 1000;

    for(i=0; i<10; i++){
        if(Petrol_Prices[i] < min){
            min = Petrol_Prices[i];
            minimum = i+1;
        }
        sum = sum + Petrol_Prices[i];
    }

    avg = sum/10;

    printf("The lowest price of Petrol was on Day: %d\n", minimum);
    printf("Average price of petrol across 10 Days is: %.2f", avg);

    return 0;

}
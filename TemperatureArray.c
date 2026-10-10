#include <stdio.h>

int main(){

    int Temperatures[7];
    int hottest_day, days_abv_avg, i, j, sum, max_temp;
    float avg_temp;
    hottest_day = 0;
    max_temp = 0;
    days_abv_avg = 0;
    sum = 0;
    avg_temp = 0.0;

    for(i = 0; i < 7; i++){
        printf("Enter temperature for day %d: ", i+1);
        scanf("%d", &Temperatures[i]);
        sum = sum + Temperatures[i];
    }

    avg_temp = sum/7;

    for(j = 0; j < 7; j++){

        if(Temperatures[j] > max_temp){
            max_temp = Temperatures[j];
            hottest_day = j+1;
        }

        if(Temperatures[j] > avg_temp){
            days_abv_avg++;
        }

    }

    printf("Average Temperature: %.2f\n", avg_temp);
    printf("Hottest day: Day %d = %d\n", hottest_day, max_temp);
    printf("Days above average: %d", days_abv_avg);

    return 0;

}
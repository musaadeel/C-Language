#include <stdio.h>

int main(){

    int Runs[10];
    int Total_runs, Highest, Highest_over, over_ten, i;
    float avg_per_over;
    Total_runs = 0;
    Highest = 0;
    Highest_over = 0;
    over_ten = 0;
    avg_per_over = 0.0;

    for(i = 0; i < 10; i++){
        printf("Enter runs of Over %d: ", i+1);
        scanf("%d", &Runs[i]);
        Total_runs = Total_runs + Runs[i];
        if (Runs[i] > Highest){
            Highest = Runs[i];
            Highest_over = i+1;
        }
        if(Runs[i] >= 10){
            over_ten++;
        }
    }

    avg_per_over = Total_runs/10;

    printf("Total runs: %d\n", Total_runs);
    printf("Average per over: %.2f\n", avg_per_over);
    printf("Highest: %d runs in over %d\n", Highest, Highest_over);
    printf("Overs with 10 or more runs: %d", over_ten);

    return 0;

}
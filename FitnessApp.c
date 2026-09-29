#include <stdio.h>

int main(){

    int i, j, total_steps;
    int steps[7] = {0};
    total_steps = 0;

    for(i=0; i<7; i++){
        printf("Enter walking steps for day %d: ", i+1);
        scanf("%d", &steps[i]);
        total_steps = total_steps + steps[i];
        if(steps[i] >= 8000){
            printf("You met your daily gaol of 8000 Steps\n");
        }
        else{
            printf("You fell short of your daily goal of 8000 steps\n");
        }
    }

    printf("Your total steps across 7 days are: %d\n", total_steps);

    return 0;

}
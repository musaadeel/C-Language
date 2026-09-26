#include <stdio.h>

int main(){

    int player_score, completed_missions;

    printf("Enter your Score: ");
    scanf("%d", &player_score);
    printf("Enter your Completed Missions: ");
    scanf("%d", &completed_missions);

    if(player_score >= 1000 && completed_missions >=10){
        printf("You are qualified for Level 3");
    }
    else if(player_score >= 500 && completed_missions >= 5){
        printf("You are qualified for Level 2");
    }
    else{
        printf("Your Level = 1");
    }

    return 0;

}
#include <stdio.h>

struct PlayerStats{

    char Name[20];
    int Runs;
    int Balls;
    float StrikeRate;

};

int main(){

    struct PlayerStats Players[11];
    int Total_Runs = 0;
    int Total_Balls = 0;
    int Max = 0;
    int Best_Player = -1;
    float Team_Avg = 0.0;

    for(int i = 0; i < 11; i++){

        printf("Enter Name of Player %d: ", i + 1);
        scanf("%s", &Players[i].Name);

        printf("Enter Runs of Player %d: ", i + 1);
        scanf("%d", &Players[i].Runs);
        Total_Runs += Players[i].Runs;

        printf("Enter Balls of Player %d: ", i + 1);
        scanf("%d", &Players[i].Balls);
        Total_Balls += Players[i].Balls;

        Players[i].StrikeRate = ((Players[i].Runs/Players[i].Balls) * 100);
        if(Players[i].StrikeRate > Max){
            Max = Players[i].StrikeRate;
            Best_Player = i;
        }

    }

    Team_Avg = (Total_Runs/Total_Balls);
    printf("Best Player is: %s\n", Players[Best_Player].Name);
    printf("Team's Average is: %.2f", Team_Avg);

    return 0;

}
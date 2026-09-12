#include <stdio.h>

int main(){
    int entry_test_score;
    float fsc_percentage, combined_score;
    printf("Enter your Entry Test score (Out of 100): ");
    scanf("%d", &entry_test_score);
    printf("Enter your FSC Percentage: ");
    scanf("%f", &fsc_percentage);
    if (entry_test_score > 100){
        printf("Invalid Entry Test Score");
    }
    else{
        combined_score = ((0.5 * entry_test_score) + (0.5 * fsc_percentage));
        if (combined_score >= 80){
            printf("You got Admission in Computer Science");
        }
        else if (combined_score >= 65 && combined_score <= 79){
            printf("You got Admission in Software Engineering");
        }
        else if (combined_score >= 50 && combined_score <= 64){
            printf("You got Admission in Information Technology");
        }
        else{
            printf("You are Rejected");
        }
    }

    return 0;

}
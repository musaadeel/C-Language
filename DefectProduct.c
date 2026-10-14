#include <stdio.h>

int main(){

    int i, j, defective_count, batch_defect;
    int Products[5][6];
    float overall_defect_percentage, average_defects;

    defective_count = 0;
    overall_defect_percentage = 0.0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            printf("Enter for Batch (%d) Product (%d) (1 = defective, 0 = acceptable): ", i+1, j+1);
            scanf("%d", &Products[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            if(Products[i][j] == 1){
                defective_count++;
            }
        }
    }

    overall_defect_percentage = (defective_count/30.0) * 100;
    average_defects = defective_count/5.0;
    printf("Overall Defect Percentage is %.2f\n", overall_defect_percentage);
    printf("Average Defects per batch are: %.2f\n", average_defects);

    for(i = 0; i < 5; i++){
        batch_defect = 0;
        for(j = 0; j < 6; j++){
            if(Products[i][j] == 1){
                batch_defect++;
            }
        }
        if(batch_defect > average_defects){
            printf("Batch %d is above average\n", i + 1);
        }
        else if(batch_defect == average_defects){
            printf("Batch %d is equal to average\n", i + 1);
        }
        else{
            printf("Batch %d is below average\n", i + 1);   
        }
    }

    return 0;

}
#include <stdio.h>

int main(){

    int i, j, count;
    int Recorded_Attendance[10] = {0};

    for(i=0; i<10; i++){
        printf("Enter Attendance for day %d: ", i + 1);
        scanf("%d", &Recorded_Attendance[i]);
    }

    for(j=0; j<10; j++){
        if(Recorded_Attendance[j] >= 54){
            count++;
        }
    }

    printf("Days at which attendance met 90 percent threshold are: %d", count);

    return 0;

}
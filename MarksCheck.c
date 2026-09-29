#include <stdio.h>

int main(){

    int Marks[10] = {0};
    int i, j, pass_count;
    pass_count = 0;

    for(j=0; j<=9; j++){
        printf("Enter Marks: ");
        scanf("%d", &Marks[j]);
    }


    for(i=0; i<=9; i++){
        if(Marks[i] >= 40){
            printf("Student Roll Number: 26K-%d (Pass)\n", i+1);
            pass_count++;
        }
        else{
            printf("Student Roll Number: 26K-%d (Fail)\n", i+1);
        }
    }

    printf("Total number of Students who passed: %d", pass_count);

    return 0;

}

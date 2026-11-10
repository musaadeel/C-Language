#include <stdio.h>
#include <string.h>

void sortNames(char Array[][50], int N){
    int i, j;
    char temp[50];

    for(i = 0; i < N - 1; i++){
        for(j = 0; j < N - i - 1; j++){
             if(strcmp(Array[j], Array[j+1]) > 0){
               strcpy(temp, Array[j]);
               strcpy(Array[j], Array[j+1]);
               strcpy(Array[j+1], temp);
            }
        }
    }

}

int main(){

    int N, i;

    printf("Enter number of patients: ");
    scanf("%d", &N);

    char Names[N][50];

    for(i = 0; i < N; i++){
        printf("Enter name of Patient %d: ", i + 1);
        scanf("%s", &Names[i]);
    }

    printf("Before Sorting: \n");
    for(i = 0; i < N; i++){
        printf("%s\n", Names[i]);
    }
    printf("\n");

    sortNames(Names, N);

    printf("After Sorting: \n");
    for(i = 0; i < N; i++){
        printf("%s\n", Names[i]);
    }

    return 0;

}


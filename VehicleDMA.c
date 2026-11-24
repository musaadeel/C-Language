#include <stdio.h>
#include <stdlib.h>

int main(){

    int N, i ,total, count;
    float avg = 0.0;
    count = 0;
    total = 0;
    int *ptr;
    printf("Enter Vehicle count N: ");
    scanf("%d", &N);

    ptr = (int *)malloc(N * sizeof(int));

    if(ptr == NULL){
        printf("Memory Allocation Failed!\n");
        return 1;
    }

    printf("Enter Fees for %d Vehicles: \n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &ptr[i]);
        total += ptr[i];
    }

    avg = total/N;

    for(i = 0; i < N; i++){
        if(ptr[i] > avg){
            count++;
        }
    }

    printf("Total: %d\n", total);
    printf("Above Average Vehicles: %d", count);

    free(ptr);
    return 0;

}
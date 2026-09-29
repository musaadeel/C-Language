#include <stdio.h>

int main(){

    int Plate_Number[15] = {0};
    int i, j, even_count, odd_count;
    even_count = 0;
    odd_count = 0;

    for(i=0; i<=14; i++){
        printf("Enter vehicle plate number for Car %d: ", i+1);
        scanf("%d", &Plate_Number[i]);
    }

    for(j=0; j<=14; j++){
        if(Plate_Number[j] % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }

    printf("Number of Cars with Even number plate are: %d\n", even_count);
    printf("Number of Cars with Odd number plate are: %d", odd_count);

    return 0;

}
#include <stdio.h>
#include <string.h>

int main(){

    int N, i;

    printf("Enter number of names to add: ");
    scanf("%d", &N);
    char Name[20];

    FILE *fptr;
    fptr = fopen("Roll.txt", "w");
    for(i = 0; i < N; i++){
        printf("Enter Name %d: ", i + 1);
        scanf("%s", &Name);
        fprintf(fptr, "%s\n", Name);
    }
    fclose(fptr);

    fptr = fopen("Roll.txt", "r");
    int max = 0, index = 0, length = 0;
    char Array[N][20];

    for(i = 0; i < N; i++){
        fscanf(fptr, "%s", &Array[i]);
        printf("Name: %s\n", Array[i]);
        length = strlen(Array[i]);
        printf("Length: %d\n", length);
        if(length > max){
            max = length;
            index = i;
        }
    }
    printf("Longest: %s (%d characters)", Array[index], max);

    return 0;

}
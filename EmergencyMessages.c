#include <stdio.h>

int main(){

    char Messages[5][41];
    int exclamation_count[5] = {0};
    int question_count[5] = {0};
    int total_count[5] = {0};
    int i, j, max_index;

    max_index = 0;

    for(i = 0; i < 5; i++){
        printf("Enter Emergency Message %d: ", i + 1);
        scanf("%40[^\n]", Messages[i]);
        getchar();
    }

    for(i = 0; i < 5; i++){
        for(j = 0; Messages[i][j] != '\0'; j++){
            if(Messages[i][j] == '!'){
                exclamation_count[i]++;
            }
            else if(Messages[i][j] == '?'){
                question_count[i]++;
            }
        }

        total_count[i] = exclamation_count[i] + question_count[i];

        if(total_count[i] > total_count[max_index]){
            max_index = i;
        }
    }

    for(i = 0; i < 5; i++){
        printf("Emergency Message %d is: %s\n", i + 1, Messages[i]);
        printf("Count of Excalamation in Message %d is: %d\n", i + 1, exclamation_count[i]);
        printf("Count of Question in Message %d is: %d\n", i + 1, question_count[i]);
        printf("Combined Total of both symbols in Message %d is: %d\n", i + 1, total_count[i]);
    }

    printf("Message with greatest count of symbols is: %s\n", Messages[max_index]);
    printf("With total count of symbols: %d", total_count[max_index]);

    return 0;

}
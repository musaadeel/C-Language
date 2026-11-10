#include <stdio.h>
#include <string.h>

void sortWord(char word[]){
    int i, j;
    char temp;

    for(i = 0; i < strlen(word)-1; i++){
        for(j = 0; j < strlen(word)-i-1; j++){

            if(word[j] > word[j+1]){
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }

        }
    }
}

int main(){

    int N, i, j, k;
    int count, unmatched = 0;
    int visited[100] = {0};

    printf("Enter number of words: ");
    scanf("%d", &N);

    char Words[N][50];
    char Sorted[N][50];

    for(i = 0; i < N; i++){
        printf("Enter word %d: ", i+1);
        scanf("%49s", Words[i]);

        strcpy(Sorted[i], Words[i]);

        sortWord(Sorted[i]);
    }

    printf("Anagram Groups:\n");

    for(i = 0; i < N; i++){

        if(visited[i] == 1){
            continue;
        }

        count = 1;

        for(j = i+1; j < N; j++){

            if(strcmp(Sorted[i], Sorted[j]) == 0){
                count++;
            }

        }

        if(count >= 2){

            printf("Group: ");

            printf("%s", Words[i]);
            visited[i] = 1;

            for(j = i+1; j < N; j++){

                if(strcmp(Sorted[i], Sorted[j]) == 0){
                    printf(", %s", Words[j]);
                    visited[j] = 1;
                }

            }

            printf("\n");
        }
        else{
            unmatched++;
            visited[i] = 1;
        }
    }

    printf("\nUnmatched: %d\n", unmatched);

    return 0;
}

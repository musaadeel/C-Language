#include <stdio.h>
#include <string.h>

int main(){

    char Animals[5][20] = {
        "tiger",
        "elephant",
        "rabbit",
        "giraffe",
        "monkey"
    };

    char word[20];
    char guessed[26];
    char display[20];

    int choice, i, j;
    int wrong = 0;
    int found, repeated;
    int win = 0;
    int length, total = 0;

    printf("Animal Hangman Game\n");

    printf("\nHost, select a word (1-5): ");
    scanf("%d", &choice);

    if(choice < 1 || choice > 5){
        printf("Invalid choice!");
        return 0;
    }

    strcpy(word, Animals[choice-1]);

    length = strlen(word);

    for(i = 0; i < length; i++){
        display[i] = '_';
    }

    display[length] = '\0';


    while(wrong < 6 && win == 0){

        printf("Word: \n");

        for(i = 0; i < length; i++){
            printf("%c ", display[i]);
        }

        printf("Guessed letters: \n");

        for(i = 0; i < total; i++){
            printf("%c ", guessed[i]);
        }

        printf("\nWrong guesses remaining: %d", 6-wrong);

        char ch;

        printf("\n\nEnter a letter: ");
        scanf(" %c", &ch);

        repeated = 0;

        for(i = 0; i < total; i++){
            if(guessed[i] == ch){
                repeated = 1;
                break;
            }
        }

        if(repeated == 1){
            printf("You already guessed this letter!");
            continue;
        }

        guessed[total] = ch;
        total++;

        found = 0;

        for(i = 0; i < length; i++){

            if(word[i] == ch){
                display[i] = ch;
                found = 1;
            }

        }

        if(found == 1){
            printf("Correct guess!");
        }
        else{
            wrong++;
            printf("Wrong guess!");
        }

        win = 1;

        for(i = 0; i < length; i++){
            if(display[i] == '_'){
                win = 0;
                break;
            }
        }

    }

    printf("\n\nFinal Word: %s", word);

    if(win == 1){
        printf("\nYou win!");
    }
    else{
        printf("\nYou lose!");
    }

    return 0;
}

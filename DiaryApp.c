#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int option;
    FILE *fptr;

    do {

        printf("Menu:\n");
        printf("(1) Add Entry\n");
        printf("(2) View Diary\n");
        printf("(3) Statistics\n");
        printf("(4) Exit\n");
        printf("Enter an option (1-4): ");
        scanf("%d", &option);

        if(option < 1 || option > 4){
            printf("Invalid Option\n");
        }
        else {

            switch(option){

                case 1: {
                    fptr = fopen("diary.txt", "a");

                    if(fptr == NULL){
                        printf("File cannot be opened\n");
                        break;
                    }

                    char sentence[100];

                    getchar();

                    printf("Enter your diary entry: ");
                    fgets(sentence, 100, stdin);

                    fputs(sentence, fptr);

                    fclose(fptr);

                    break;
                }

                case 2: {
                    fptr = fopen("diary.txt", "r");

                    if(fptr == NULL){
                        printf("File does not exist\n");
                        break;
                    }

                    char text[100];
                    int i = 1;

                    while(fgets(text, 100, fptr) != NULL){
                        printf("Line %d: %s", i, text);
                        i++;
                    }

                    fclose(fptr);
                    break;
                }

                case 3: {
                    fptr = fopen("diary.txt", "r");

                    if(fptr == NULL){
                        printf("File does not exist\n");
                        break;
                    }

                    char text[100];
                    int entries = 0;

                    while(fgets(text, 100, fptr) != NULL){
                        entries++;
                    }

                    if(entries == 0){
                        printf("No entries found.\n");
                        fclose(fptr);
                        break;
                    }

                    rewind(fptr);

                    char Array[entries][100];

                    for(int i = 0; i < entries; i++){
                        fgets(Array[i], 100, fptr);
                    }

                    int longest = 0;
                    int char_count = 0;
                    int total_count = 0;
                    int index = 0;

                    for(int i = 0; i < entries; i++){

                        char_count = strlen(Array[i]);

                        if(char_count > 0 &&
                           Array[i][char_count-1] == '\n'){
                            char_count--;
                        }

                        if(char_count > longest){
                            longest = char_count;
                            index = i;
                        }

                        total_count += char_count;
                    }

                    printf("Number of Entries: %d\n", entries);
                    printf("Total Characters: %d\n", total_count);
                    printf("Longest Entry: %s", Array[index]);
                    printf(" (%d characters)\n", longest);

                    fclose(fptr);
                    break;
                }

                case 4:
                    printf("Exiting Diary App...\n");
                    break;
            }
        }

    } while(option != 4);

    return 0;
}

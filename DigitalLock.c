#include <stdio.h>

int main(){

    char key;
    int i, j, digit_count, alphabet_count;
    digit_count = 0;
    alphabet_count = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter key %d: ", i+1);
        scanf(" %c", &key);

        if (key >= '0' && key <= '9') {
            digit_count++;
        }
        else if ((key >= 'A' && key <= 'Z') ||
                 (key >= 'a' && key <= 'z')) {
            alphabet_count++;
        }
    }

    printf("Number of digits in key are: %d\n", digit_count);
    printf("Number of alphabets in key are: %d", alphabet_count);

    return 0;
    
}
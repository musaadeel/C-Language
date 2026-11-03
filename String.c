#include <stdio.h>


int main(){

    char first_name[50];
    char last_name[50];
    int first_count, last_count, i;

    printf("Enter your First name: ");
    scanf("%s", &first_name);
    printf("Enter your Last name: ");
    scanf("%s", &last_name);


    for(i = 0; first_name[i] != '\0'; i++){

        printf("First Name Character %d: %c\n", i + 1, first_name[i]);

    }

    for(i = 0; last_name[i] != '\0'; i++){

        printf("Last  Name Character %d: %c\n", i + 1, last_name[i]);

    }





}
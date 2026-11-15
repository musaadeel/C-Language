#include <stdio.h>

void Function(char s);

int main(){

    char user;

    printf("Enter your Country(P = Pakistan , F = France): ");
    scanf("%c", &user);

    Function(user);

    return 0;

}

void Function(char s){

    if(s == 'p' || s == 'P'){
        printf("Assalamualikum");
    }
    else if(s == 'f' || s == 'F'){
        printf("Bonjour");
    }
    else{
        printf("Invalid Country");
    }

}
#include <stdio.h>

int main(){

    int pin, actual_pin, attempts;
    actual_pin = 1297;
    attempts = 0;

    printf("Enter your 4-digit Pin: ");
    scanf("%d", &pin);
    attempts++;

    while (pin != actual_pin && attempts < 3){
        printf("Incorrect Pin, Re-enter: ");
        scanf("%d", &pin);
        attempts++;
    }

    if (pin == actual_pin){
        printf("Access Granted");
    }
    else{
        printf("Card Blocked");
    }

    return 0;

}
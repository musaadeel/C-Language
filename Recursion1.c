#include <stdio.h>

void printHW(int count);

int main(){

    int n;

    printf("Enter number n to print n times: ");
    scanf("%d", &n);
    printHW(n);

    return 0;

}

void printHW(int count){

    if(count == 0){
        return;
    }

    printf("Hello World\n");
    printHW(count - 1);

}
#include <stdio.h>

int main(){

    int permission_code;

    printf("Enter permission code: ");
    scanf("%d", &permission_code);

    if(permission_code & 1){
        printf("Read Available\n");
    }
    else{
        printf("Read Not Available\n");
    }

    if(permission_code & 2){
        printf("Write Available\n");
    }
    else{
        printf("Write Not Available\n");
    }
    if(permission_code & 4){
        printf("Execute Available");
    }
    else{
        printf("Execute Not Available");
    }

    return 0;

}
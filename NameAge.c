#include <stdio.h>

int main(){

    int age; 
    char name[50];

    printf("Enter your Name : ");
    scanf("%s", &name);
    printf("Enter your Age : ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old", name,age);

    return 0;
}
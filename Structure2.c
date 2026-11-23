#include <stdio.h>
#include <string.h>

struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

};

int main(){

    struct Student ece[100];
    ece[0].Roll = 3023;
    ece[0].Cgpa = 9.2;
    strcpy(ece[0].Name, "Musa");

    printf("Name: %s\n", ece[0].Name);
    printf("Roll Number: %d\n", ece[0].Roll);
    printf("CGPA: %d\n", ece[0].Cgpa);

    return 0;

}
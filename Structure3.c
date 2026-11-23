#include <stdio.h>
#include <string.h>

struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

};

int main(){

    struct Student s1 = {3023, "Musa", 9.2};
    printf("Roll Number: %d\n", s1.Roll);
    printf("Name: %s\n", s1.Name);
    printf("Cgpa: %.2f\n", s1.Cgpa);

    return 0;

}
#include <stdio.h>
#include <string.h>

struct student{

    char name[20];
    float cgpa;
    int roll;

};

int main(){

    struct student s1;
    s1.roll = 3023;
    s1.cgpa = 3.33;
    strcpy(s1.name, "musa");

    printf("Student Name: %s\n", s1.name);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    printf("Student Roll Number: %d\n", s1.roll);

    return 0;
    
}
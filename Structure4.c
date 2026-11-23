#include <stdio.h>

struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

};

int main(){

    struct Student s1 = {3023, "Musa", 9.2};

    struct Student *ptr = &s1;
    printf("Roll Number: %d", (*ptr).Roll);
    printf("Name: %s", (*ptr).Name);
    printf("CGPA: %.2f", (*ptr).Cgpa);

    return 0;

}
#include <stdio.h>

struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

};

void printInfo(struct Student s1);

int main(){

    struct Student s1 = {3023, "Musa", 9.2};
    printInfo(s1);

    return 0;

}

void printInfo(struct Student s1){
    printf("Name: %s\n", s1.Name);
    printf("Roll Number: %d\n", s1.Roll);
    printf("Cgpa: %.2f\n", s1.Cgpa);
}
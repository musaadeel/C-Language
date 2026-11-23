#include <stdio.h>

typedef struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

} stu;

int main(){

    stu s1 = {3023, "Musa", 9.2};
    printf("Roll Number: %d", s1.Roll);

    return 0;

}
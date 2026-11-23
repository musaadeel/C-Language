#include <stdio.h>

struct Student{

    int Roll;
    char Name[20];
    float Cgpa;

};

int main(){

    struct Student s1 = {3023, "Musa", 9.2};
    struct Student *ptr = &s1;

    printf(".roll = %d\n", s1.Roll);
    printf(".roll with ptr = %d\n", (*ptr).Roll);
    printf(".roll with -> = %d\n", ptr->Roll);

    return 0;

}
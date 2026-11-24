#include <stdio.h>

struct Patient{

    int ID;
    char Name[20];
    int Age;
    float Body_temp;

};

char*checkFever(struct Patient p1);

int main(){

    struct Patient p1;
    struct Patient p2;

    printf("Enter ID of Patient %d: ", 1);
    scanf("%d", &p1.ID);
    printf("Enter the name of Patient %d: ", 1);
    scanf("%s", &p1.Name);
    printf("Enter Age of Patient %d: ", 1);
    scanf("%d", &p1.Age);
    printf("Enter Body Temperature of Patient %d: ", 1);
    scanf("%f", &p1.Body_temp);
    printf("Enter ID of Patient %d: ", 2);
    scanf("%d", &p2.ID);
    printf("Enter the name of Patient %d: ", 2);
    scanf("%s", &p2.Name);
    printf("Enter Age of Patient %d: ", 2);
    scanf("%d", &p2.Age);
    printf("Enter Body Temperature of Patient %d: ", 2);
    scanf("%f", &p2.Body_temp);

    printf("ID of Patient %d: %d\n", 1, p1.ID);
    printf("Name of Patient %d: %s\n", 1, p1.Name);
    printf("Age of Patient %d: %d\n", 1, p1.Age);
    printf("Body Temperature of Patient %d: %s\n",1, checkFever(p1));

    printf("ID of Patient %d: %d\n", 1, p2.ID);
    printf("Name of Patient %d: %s\n", 1, p2.Name);
    printf("Age of Patient %d: %d\n", 1, p2.Age);
    printf("Body Temperature of Patient %d: %s\n",2, checkFever(p2));

    return 0;

}

char* checkFever(struct Patient p1){

    if(p1.Body_temp > 100,4){
        return "Fever";
    }
    else{
        return "Normal";
    }

}


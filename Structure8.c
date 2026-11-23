#include <stdio.h>
#include <string.h>

typedef struct Address{

    int house_no;
    char block[10];
    char city[20];
    char state[20];

} address ;

int main(){

    address people[5];

    for(int i = 0; i < 5; i++){
        printf("Enter House Number: ");
        scanf("%d", &people[i].house_no);
        printf("Enter Block: ");
        scanf("%s", &people[i].block);
        printf("Enter City: ");
        scanf("%s", &people[i].city);
        printf("Enter State: ");
        scanf("%s", &people[i].state);
    }

    for(int i = 0; i < 5; i++){
        printf("House Number of Person %d: %d\n",i+1, people[i].house_no);
        printf("Block of Person %d: %s\n",i+1, people[i].block);
        printf("City of Person %d: %s\n",i+1, people[i].city);
        printf("State of Person %d: %s\n",i+1, people[i].state);
        
    }

    return 0;

}
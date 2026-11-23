#include <stdio.h>

typedef struct vectors{

    int x;
    int y;

} vect ;

void VectorsSum(struct vectors v1, struct vectors v2);

int main(){

    vect v1;
    vect v2;

    printf("Enter vector x of vector 1: ");
    scanf("%d", &v1.x);
    printf("Enter vector y of vector 1: ");
    scanf("%d", &v1.y);
    printf("Enter vector x of vector 2: ");
    scanf("%d", &v2.x);
    printf("Enter vector y of vector 2: ");
    scanf("%d", &v2.y);

    VectorsSum(v1,v2);

    return 0;

}

void VectorsSum(struct vectors v1, struct vectors v2){

    vect result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    printf("Resultant Vector x of v1 & v2: %d\n", result.x);
    printf("Resultant Vector y of v1 & v2: %d", result.y);

}
#include <stdio.h>

int main(){
    int Num1 , Num2, Sum, Difference, Product, Quotient;
    printf("Enter Number 1 : ");
    scanf("%d", &Num1);
    printf("Enter Number 2 : ");
    scanf("%d", &Num2);
    Sum = Num1 + Num2;
    Difference = Num1 - Num2;
    Product = Num1 * Num2;
    Quotient = Num1/Num2;
    printf("Sum is : %d\n", Sum);
    printf("Difference is : %d\n", Difference);
    printf("Product is : %d\n", Product);
    printf("Quotient is : %d", Quotient);

    return 0;

}
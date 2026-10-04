#include <stdio.h>

int main(){

    float Prices[3];
    float total_price;
    total_price = 0.0;

    printf("Enter price for Item 1: ");
    scanf("%f", &Prices[0]);
    printf("Enter price for Item 2: ");
    scanf("%f", &Prices[1]);
    printf("Enter price for Item 3: ");
    scanf("%f", &Prices[2]);

    printf("Total price for item 1: %.2f\n", Prices[0] + (Prices[0] * 0.18));
    printf("Total price for item 2: %.2f\n", Prices[1] + (Prices[1] * 0.18));
    printf("Total price for item 3: %.2f", Prices[2] + (Prices[2] * 0.18));

    return 0;

}
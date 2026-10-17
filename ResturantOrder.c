#include <stdio.h>

int main(){

    int i, j;
    char dish[3][3][50];
    int quantity[3][3];
    float price[3][3];
    float total_bill[3] = {0, 0, 0};
    float highest_bill = 0;
    int highest_table = 1;

    for (i = 0; i < 3; i++){

        printf("Enter orders for Table %d: \n", i + 1);

        for (j = 0; j < 3; j++){

            printf("Order %d\n", j + 1);

            printf("Enter dish name: ");
            scanf(" %49[^\n]", dish[i][j]);

            printf("Enter quantity: ");
            scanf("%d", &quantity[i][j]);

            printf("Enter price per item: ");
            scanf("%f", &price[i][j]);

            total_bill[i] += quantity[i][j] * price[i][j];
        }
    }


    for (i = 0; i < 3; i++) {

        printf("Table %d:\n", i + 1);

        for (j = 0; j < 3; j++) {

            printf("Order %d: %s | Quantity: %d | Price per item: %.2f"
                   " | Subtotal: %.2f\n",
                   j + 1,
                   dish[i][j],
                   quantity[i][j],
                   price[i][j],
                   quantity[i][j] * price[i][j]);
        }

        printf("Total bill for Table %d = %.2f\n",
               i + 1, total_bill[i]);

        if (total_bill[i] > highest_bill) {
            highest_bill = total_bill[i];
            highest_table = i + 1;
        }
    }

    printf("Table with the highest bill: Table %d\n", highest_table);
    printf("Highest bill: %.2f\n", highest_bill);

    return 0;
}
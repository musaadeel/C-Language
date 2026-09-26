#include <stdio.h>

int main(){

    int meal_category, item_choice;

    printf("1 = Breakfast\n");
    printf("2 = Lunch\n");
    printf("3 = Dinner\n");
    printf("Enter a Meal Category(1-3): ");
    scanf("%d", &meal_category);
    printf("Enter a Item Choice(1-3): ");
    scanf("%d", &item_choice);
    
    switch (meal_category){

        case 1:
        switch (item_choice){
            case 1:
            printf("Item: Eggs\n");
            printf("Price: 100 Rs.");
            break;

            case 2:
            printf("Item: Pancakes\n");
            printf("Price: 200 Rs.");
            break;

            case 3:
            printf("Item: Sandwich\n");
            printf("Price: 350 Rs.");
            break;

            default:
            printf("Invalid Item Choice");
        }
        break;

        case 2:
        switch (item_choice){
            case 1:
            printf("Item: Zinger Burger\n");
            printf("Price: 650 Rs.");
            break;

            case 2:
            printf("Item: Pizza\n");
            printf("Price: 400 Rs.");
            break;

            case 3:
            printf("Item: White Sauce Pasta\n");
            printf("Price: 500 Rs.");
            break;

            default:
            printf("Invalid Item Choice");
        }
        break;

        case 3:
        switch (item_choice){
            case 1:
            printf("Item: Beef Steak\n");
            printf("Price: 1100 Rs.");
            break;

            case 2:
            printf("Item: Singaporian Rice\n");
            printf("Price: 700 Rs.");
            break;

            case 3:
            printf("Item: BBQ\n");
            printf("Price: 800 Rs.");
            break;

            default:
            printf("Invalid Item Choice");
        }
        break;

        default:
        printf("Invalid Meal Category");
 
    }

    return 0;

}
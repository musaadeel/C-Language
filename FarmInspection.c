#include <stdio.h>

int main() {

    int i, j;
    int insects[3][4][2];
    int total_insect_field[3];
    int total_insect_plot;
    int highest_combined_count = 0;
    int highest_field = 1;

    for (i = 0; i < 3; i++) {
        total_insect_plot = 0;
        for (j = 0; j < 4; j++) {
            do {
                printf("Enter number of insects for morning (Field %d Plot %d): ", i + 1, j + 1);
                scanf("%d", &insects[i][j][0]);

                if (insects[i][j][0] < 0) {
                    printf("Count cannot be negative.\n");
                }
            } while (insects[i][j][0] < 0);

            do {
                printf("Enter number of insects for evening (Field %d Plot %d): ", i + 1, j + 1);
                scanf("%d", &insects[i][j][1]);

                if (insects[i][j][1] < 0) {
                    printf("Count cannot be negative. Try again.\n");
                }

            } while (insects[i][j][1] < 0);

            if (insects[i][j][1] > insects[i][j][0]) {
                printf("Insects increased in Field %d, Plot %d\n", i + 1, j + 1);
            }

            total_insect_plot += insects[i][j][0] + insects[i][j][1];
        }

        total_insect_field[i] = total_insect_plot;

        printf("Total insects in Field %d = %d\n", i + 1, total_insect_field[i]);

        if (total_insect_field[i] > highest_combined_count) {
            highest_combined_count = total_insect_field[i];
            highest_field = i + 1;
        }
    }

    printf("\nField with highest count: Field %d\n", highest_field);
    printf("Highest combined count: %d\n", highest_combined_count);

    return 0;

}
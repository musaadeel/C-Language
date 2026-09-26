#include <stdio.h>

int main(){

    int service_years, performance_rating;
    float bonus_percentage, bonus_amount, salary, final_salary;

    printf("Enter your Salary: ");
    scanf("%f", &salary);
    printf("Enter your years of service: ");
    scanf("%d", &service_years);
    printf("Enter your Perfromance Rating(1-5): ");
    scanf("%d", &performance_rating);

     if (service_years >= 10) {
        if (performance_rating >= 4)
            bonus_percentage = 0.2;
        else
            bonus_percentage = 0.1;
    }
    else if (service_years >= 5) {
        if (performance_rating >= 4)
            bonus_percentage = 0.15;
        else
            bonus_percentage = 8;
    }
    else {
        if (performance_rating >= 4)
            bonus_percentage = 0.10;
        else
            bonus_percentage = 0.05;
    }
    

   bonus_amount = salary * bonus_percentage;
   final_salary = salary + bonus_amount;
   printf("Your bonus amount is: %.2f\n", bonus_amount);
   printf("Your final salary is: %.2f", final_salary);


   return 0;

}
